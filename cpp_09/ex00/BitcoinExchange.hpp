# pragma once 

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include <algorithm>
# include <iterator>
# include <fstream>
#include <sstream>



class BitcoinExchange
{
    private:
        std::map<std::string, double> dataMap;
    public:
        BitcoinExchange();
        // BitcoinExchange(const BitcoinExchange &other);
        // BitcoinExchange &operator=(const BitcoinExchange &other);
        // ~BitcoinExchange();
        // void storeDatacsv();
        // void parseData();
        void parseFileInput(std::string filename);
        double retValue(std::string date, double value);
        // int checkValidDate(std::istringstream key);
};

// std::ostream &operator<<(std::ostream &out, const BitcoinExchange &exchange);

