# pragma once 

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include <algorithm>
# include <iterator>
# include <fstream>
#include <sstream>


#define RED "\e[1;31m"
#define WHI "\e[0;37m"
#define GRE "\e[1;32m"
#define YEL "\e[1;33m"



class BitcoinExchange
{
    public:
        std::map<std::string, double> dataMap;
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        void parseFileInput(std::string filename);
        double retValue(std::string date, double value);
};


