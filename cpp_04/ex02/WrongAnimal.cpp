/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:02:39 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/24 11:12:22 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal type constructor called" << std::endl;
    _type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    _type = copy.getType();
    return (*this);
}

std::string	WrongAnimal::getType() const
{
    return (_type);
}

void	WrongAnimal::makeSound() const
{
    std::cout << "Animal sound wee weee wee" << std::endl;
}

