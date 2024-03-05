/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:43:15 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/05 20:11:44 by otaraki          ###   ########.fr       */
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
    (void)copy;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
}


void ScalarConverter::convert(std::string _input)
{
    printChar(_input);
    printInt(_input);
    printFloat(_input);
    printDouble(_input);
}




void ScalarConverter::printChar(std::string _input)
{
    int i;

    i = std::atoi(_input.c_str());
    std::cout << "char: ";
    if (isprint(i))
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    else
        throw ScalarConverter::NonDisplayableException();
}

void ScalarConverter::printInt(std::string _input)
{
    int _int;
    try
    {
        _int = std::stoi(_input);
    }
    catch(const std::exception& e)
    {
        throw ScalarConverter::ImpossibleException();
    }
    std::cout << "int: " << _int << std::endl;
}


void ScalarConverter::printFloat(std::string _input)
{
    float _float;
    try
    {
        _float = std::stof(_input);
    }
    catch(const std::exception& e)
    {
        throw ScalarConverter::ImpossibleException();
    }
    std::cout << "float: ";
    if (std::isinf(_float) || std::isnan(_float))
        std::cout << _float << "f" << std::endl;
    else
        std::cout << _float << "f" << std::endl;
}

void ScalarConverter::printDouble(std::string _input)
{
    double _double;
    try
    {
        _double = std::stod(_input);
    }
    catch(const std::exception& e)
    {
        throw ScalarConverter::ImpossibleException();
    }
    std::cout << "double: ";
    if (std::isinf(_double) || std::isnan(_double))
        std::cout << _double << std::endl;
    else
        std::cout << _double << std::endl;
}

const char* ScalarConverter::ImpossibleException::what() const throw()
{
    return ("impossible");
}

const char* ScalarConverter::NonDisplayableException::what() const throw()
{
    return ("Non displayable");
}

