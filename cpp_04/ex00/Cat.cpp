/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:59:57 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/23 17:05:49 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    _type = copy.getType();
    return (*this);
}

void	Cat::setType(std::string type)
{
    _type = type;
}

void	Cat::makeSound() const
{
    std::cout << "Moew moew moew" << std::endl;
}

/* ************************************************************************** */