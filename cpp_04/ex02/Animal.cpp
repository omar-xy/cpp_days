/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:59:10 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/25 16:26:02 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    _type = "Animal";
}

Animal::Animal(std::string type)
{
    std::cout << "Animal type constructor called" << std::endl;
    _type = type;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignation operator called" << std::endl;
    _type = copy._type;
    return (*this);
}

std::string	Animal::getType() const
{
    return (_type);
}


/* ************************************************************************** */