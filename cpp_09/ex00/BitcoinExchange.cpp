#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <map>
#include <time.h>

BitcoinExchange::BitcoinExchange()
{
    std::ifstream data("data.csv");
    std::string line;

    if (data.is_open()) 
    {   
        std::getline(data, line);
        while (std::getline(data, line))
        {
            std::istringstream ss(line);
            std::string item;
            std::vector<std::string> elements;
            while (std::getline(ss, item, ',')) 
            {
                elements.push_back(item);
            }
            if (elements.size() >= 2) 
            {
                std::string key = elements[0];
                std::istringstream valueStream(elements[1]);
                double value;
                valueStream >> value; // istringstream for conversion to double
                dataMap[key] = value;
            }
        }
        data.close();
    }
    else
        std::cout << "Unable to open file" << std::endl;
}


double BitcoinExchange::retValue(std::string date, double value)
{
        std::istringstream ss(date);

        std::map<std::string, double>::iterator it = dataMap.lower_bound(date);
        if (it != dataMap.end()) 
        {
            if (it->first == date) {
                return it->second * value;
            }
            if (it != dataMap.begin()) {
                --it;
            }
            return it->second * value;
        } 
        else 
            return -1;
 }

void BitcoinExchange::parseFileInput(std::string filename)
{
    BitcoinExchange db;
    struct tm res;
    std::ifstream file(filename);
    file.is_open();
    std::string line;
    std::getline(file, line);
    std::istringstream headFile(line);
    while(std::getline(file, line))
    {
        std::istringstream ss(line);
        std::string item;
        std::vector<std::string> elements;
        while (std::getline(ss, item, '|'))
        {
            elements.push_back(item);
        }
        if (elements.size() == 2)
        {
            double value;
            std::string key;
            std::istringstream ikey(elements[0]);
            std::istringstream valueStream(elements[1]);
            ikey >> key;
            valueStream >> value;
            if(strptime(key.c_str(), "%Y-%m-%d", &res) == NULL) 
                std::cerr << "bad input => " << key << std::endl;
            else 
            {
                std::cout << res.tm_year << std::endl;
                std::cout << res.tm_mon << std::endl;
                if (res.tm_mon + 1 == 2) {
                    if (((res.tm_year % 100 )% 4 && res.tm_mday > 28) || \
                    ((res.tm_year % 100 )% 4 == 0 && res.tm_mday > 29)) {
                        std::cerr << "bad input => " << key << std::endl;
                        return ;
                    }
                }
                if ((value >= 0 && value <= 1000))
                    std::cout << key << " => " << value << " = " << retValue(key, value) << std::endl;
                else if (value < 0)
                    std::cerr << "Error: not a positive number." << std::endl;
                else if (value >= 1000)
                    std::cerr << "Error: too large a number." << std::endl;
            }
    
        }
        else if (elements.size() >= 1)
            std::cerr << "Error: bad input => " <<  line << std::endl;
        else
            std::cerr << "No line found\n";
    }
    file.close();
}
