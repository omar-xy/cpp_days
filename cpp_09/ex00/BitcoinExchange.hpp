# pragma once 

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include <algorithm>
# include <iterator>


// class Date
// {
//     public:
//         Date();
//         Date(int day, int month, int year);
//         Date(const Date &other);
//         Date &operator=(const Date &other);
//         ~Date();
//         int getDay() const;
//         int getMonth() const;
//         int getYear() const;
//         void setDay(int day);
//         void setMonth(int month);
//         void setYear(int year);
//         void show() const;
//     private:
//         int day;
//         int month;
//         int year;
// };

// std::ostream &operator<<(std::ostream &out, const Date &date);


class BitcoinExchange
{
    private:
        std::map<std::string, double> dataMap;
    public:
        BitcoinExchange();
        // BitcoinExchange(const BitcoinExchange &other);
        // BitcoinExchange &operator=(const BitcoinExchange &other);
        // void storeDatacsv();
        // ~BitcoinExchange();
        // void parseFile();
        // void parseData();
};

// std::ostream &operator<<(std::ostream &out, const BitcoinExchange &exchange);
