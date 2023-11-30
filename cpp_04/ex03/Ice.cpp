/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:47:54 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/29 22:31:21 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    this->_type = "ice";
    // std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &copy)   
{
    // std::cout << "Ice copy constructor called" << std::endl;
    *this = copy;
}


Ice &Ice::operator=(const Ice &copy)
{
    // std::cout << "Ice assignation operator called" << std::endl;0
    if (this != &copy)
        this->_type = copy.getType();
    return (*this);
}

Ice::~Ice()
{
    // std::cout << "Ice destructor called" << std::endl;
}



std::string const & Ice::getType() const
{
    return (this->_type);
}


void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


Ice *Ice::clone() const
{
    return (new Ice());
}



