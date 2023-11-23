/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:03:25 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/23 17:03:42 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    _type = copy.getType();
    return (*this);
}

void	WrongCat::setType(std::string type)
{
    _type = type;
}

void	WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}

