/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:43:15 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/12 00:08:08 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
    *this = copy;
}


ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
}


void ScalarConverter::convert(std::string _input)
{
    // check_valid_input(_input);
    printChar(_input);
    printInt(_input);
    printFloat(_input);
    printDouble(_input);
}

// int ScalarConverter::check_valid_input(std::string _input)
// {
//     if (_input.length() == 1 && isdigit(_input[0]))
//         return 1;
//     // if (_input.length() > 1 && _input[0] == '-' && !isdigit(_input[1]))
//     //     return 2;
//     // if (_input.length() > 1 && _input[0] == '+' && !isdigit(_input[1]))
//     //     return 2;
//     if (_input.length() > 1 && !isdigit(_input[1]))
//         return 2;
//     return 0;
// }


void ScalarConverter::printChar(std::string _input)
{
    int i;

    try
    {
        i = atoi(_input.c_str());
        std::cout << "char: ";
        if (i == 0 && _input[0] == '0')
            throw ScalarConverter::NonDisplayableException();
        if (_input.length() == 1)
            std::cout << "'" << _input[0] << "'" << std::endl;
        else if (i >= 32 && i <= 126) 
            std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
        else
            throw ScalarConverter::ImpossibleException();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void ScalarConverter::printInt(std::string _input)
{
    int _int;
    try
    {
        if (_input.length() == 1)
        {
             _int = static_cast<int>(_input[0]);
            std::cout << "int: " << _int << std::endl;
        }
        else if ((_input.length() > 1 ) && isdigit(_input[1]))
        {
            _int = atoi(_input.c_str());
            std::cout << "int: " << _int << std::endl;
        }
        else
            throw ScalarConverter::ImpossibleException();
    }
    catch(const std::exception& e)
    {
        std::cout << "int: "<< e.what() << std::endl;
    }
}


void ScalarConverter::printFloat(std::string _input)
{
    float _float;
    try
    {
        std::cout << "float: ";
        if (_input.length() == 1)
        {
            _float = static_cast<float>(_input[0]);
            std::cout << std::fixed << std::setw(11) << std::setprecision(2) << _float << "f" << std::endl;
        }
        else if ((_input.length() > 1))
        {
            _float = atof(_input.c_str());
            if (std::isinf(_float) || std::isnan(_float))
                std::cout << _float  << "f" <<  std::endl;
            else if (atof(_input.c_str()) == 0.0)
                throw ScalarConverter::NonDisplayableException();
            else
                std::cout << std::fixed << std::setw(11) << std::setprecision(2) << _float << "f" << std::endl;
        }
        else       
            throw ScalarConverter::ImpossibleException();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void ScalarConverter::printDouble(std::string _input)
{
    double _double;
    try
    {
        std::cout << "double: ";
        if (_input.length() == 1)
        {
            _double = static_cast<double>(_input[0]);
            std::cout << std::fixed << std::setw(11) << std::setprecision(2) << _double << std::endl;
        }
        else if ((_input.length() > 1 ))
        {
            _double = atof(_input.c_str());
            if (std::isinf(_double) || std::isnan(_double))
                std::cout << _double << std::endl;
            else if (atof(_input.c_str()) == 0.0)
                throw ScalarConverter::NonDisplayableException();
            else
                std::cout << std::fixed << std::setw(11) << std::setprecision(2) << _double << std::endl;    
        }
        else
            throw ScalarConverter::ImpossibleException();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

const char* ScalarConverter::ImpossibleException::what() const throw()
{
    return ("impossible");
}

const char* ScalarConverter::NonDisplayableException::what() const throw()
{
    return ("Non displayable");
}

