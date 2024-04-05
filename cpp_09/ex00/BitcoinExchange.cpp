#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

BitcoinExchange::BitcoinExchange()
{
#include <map>
    std::ifstream data("data.csv");
    std::string line;

    if (data.is_open()) 
    {   
        std::getline(data, line);
        while (std::getline(data, line)) {
            std::istringstream ss(line);
            std::string item;
            std::vector<std::string> elements;

            while (std::getline(ss, item, ',')) 
            {
                std::cout << item << std::endl;
                elements.push_back(item);
            }

            if (elements.size() >= 2) 
            {
                std::string key = elements[0];
                std::istringstream valueStream(elements[1]);
                double value;
                valueStream >> value; // Use istringstream for conversion to double
                dataMap[key] = value;
            }
        }
        data.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    for (std::map<std::string, double>::iterator it = this->dataMap.begin(); it != this->dataMap.end() ; ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
    }

}
