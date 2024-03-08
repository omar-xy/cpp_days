#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>



class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &copy);
        ScalarConverter &operator=(ScalarConverter const &copy);
        ~ScalarConverter();
    public:
        
        //
        static void convert(std::string _input);
        static void printChar(std::string _input);
        static void printInt(std::string _input);
        static void printFloat(std::string _input);
        static void printDouble(std::string _input);
        static int check_valid_input(std::string _input);
        class ImpossibleException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class NonDisplayableException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

