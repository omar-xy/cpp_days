/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:47:54 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/28 23:28:46 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    std::cout << "Ice default constructor called" << std::endl;
    this->_type = "ice";
}


Ice::Ice(std::string const & type) : AMateria(type)
{
    std::cout << "Ice constructor called" << std::endl;
    this->_type = type;
}

Ice::Ice(const Ice &copy)   
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = copy;
}


Ice &Ice::operator=(const Ice &copy)
{
    std::cout << "Ice assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy.getType();
    if (copy._type != "Ice")
    {
        this->_type = "";
        std::cout << "Error: Ice assignation operator called with wrong type" << std::endl;
        return (*this);
    }
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
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
    return (new Ice(this->_type));
}



