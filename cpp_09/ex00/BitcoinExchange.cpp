#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <map>
#include <list>
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
            std::list<std::string> elements;
            while (std::getline(ss, item, ',')) 
            {
                elements.push_back(item);
            }
            if (elements.size() >= 2) 
            {
                std::string key = elements.front();
                elements.pop_front();
                std::istringstream valueStream(elements.front());
                elements.front();
                double value;
                valueStream >> value; // istringstream for conversion to double
                dataMap[key] = value;
            }
        }
        data.close();
    }
    else
        std::cout << RED << "Unable to open file" << WHI <<std::endl;
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
        else if (it == dataMap.end())
        {
            --it;
            return (it->second * value);
        }
        else 
            return -1;
}

void BitcoinExchange::parseFileInput(std::string filename)
{
    BitcoinExchange db;
    struct tm res;
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << RED << "Error: opening file"<< WHI <<std::endl;
    }
    std::string line;
    if (!(std::getline(file, line)))
    {
        std::cerr << RED << "Error: Empty input file" << WHI <<std::endl;
        return ;
    }
    std::istringstream headFile(line);
    while(std::getline(file, line))
    {
        std::istringstream ss(line);
        std::string item;
        std::list<std::string> elements;
        while (std::getline(ss, item, '|'))
            elements.push_back(item);
        if (elements.size() == 2)
        {
            double value;
            std::string key;
            std::istringstream ikey(elements.front());
            elements.pop_front();
            std::istringstream valueStream(elements.front());
            elements.pop_front();
            ikey >> key;
            valueStream >> value;
            if(strptime(key.c_str(), "%Y-%m-%d", &res) == NULL)
                std::cerr << GRE << "bad input => " << key << WHI << std::endl;
            else 
            {
                if (res.tm_mon + 1 == 2)
                {
                    if (((res.tm_year % 100 ) % 4 && res.tm_mday > 28) || \
                    ((res.tm_year % 100 )% 4 == 0 && res.tm_mday > 29)) {
                        std::cerr << GRE << "bad input => " << key << WHI << std::endl;
                        return ;
                    }
                }
                if ((value >= 0 && value <= 1000))
                    std::cout << YEL << key << " => " << value << " = " << retValue(key, value) << WHI <<std::endl;
                else if (value < 0)
                    std::cerr  << GRE << "Error: not a positive number." << WHI << std::endl;
                else if (value >= 1000)
                    std::cerr << GRE << "Error: too large number." << WHI << std::endl;
            }
        }
        else if (elements.size() >= 1)
            std::cerr << GRE << "Error: bad input => " <<  line << WHI << std::endl;
        else
            std::cerr << GRE << "No line found"<< WHI << std::endl;
    }
    file.close();
}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    dataMap = other.dataMap;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        dataMap = other.dataMap;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    
}