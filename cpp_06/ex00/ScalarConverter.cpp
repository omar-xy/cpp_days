/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:43:15 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/06 11:30:59 by otaraki          ###   ########.fr       */
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
    check_valid_input(_input);
    printChar(_input);
    printInt(_input);
    printFloat(_input);
    printDouble(_input);
}

int ScalarConverter::check_valid_input(std::string _input)
{
    if (_input.length() == 1 && !isdigit(_input[0]))
        return 1;
    if (_input.length() > 1 && _input[0] == '-' && !isdigit(_input[1]))
        return 0;
    if (_input.length() > 1 && _input[0] == '+' && !isdigit(_input[1]))
        return 0;
    return 0;
}


void ScalarConverter::printChar(std::string _input)
{
    int i;

    if (check_valid_input(_input) == 1)
    {
        std::cout << "char: ";
        if (_input[0] == '0')
            std::cout << "NonDisplayble" << std::endl;
        else if (_input[0] >= 32 && _input[0] <= 126)
            std::cout << "'" << _input[0] << "'" << std::endl;
        else
            throw ScalarConverter::NonDisplayableException();
    }
    else
    {
        i = std::atoi(_input.c_str());
        std::cout << "char: ";
        if (isprint(i))
            std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
        else
            throw ScalarConverter::NonDisplayableException();
    }
}

void ScalarConverter::printInt(std::string _input)
{
    int _int;
    try
    {
        if (check_valid_input(_input) == 1)
            _int = static_cast<int>(_input[0]);
        else
        {
            _int = std::atoi(_input.c_str());
            if (_int > std::numeric_limits<int>::max() || _int < std::numeric_limits<int>::min())
                throw ScalarConverter::ImpossibleException(); 
        }
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
        if (check_valid_input(_input) == 1)
            _float = static_cast<float>(_input[0]);
        else
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
        if (check_valid_input(_input) == 1)
            _double = static_cast<double>(_input[0]);
        else
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

