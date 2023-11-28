/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:41:30 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/28 22:33:22 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const & type)
{
    std::cout << "Cure constructor called" << std::endl;
    this->_type = type;
}

Cure::Cure(const Cure &copy)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = copy;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
    std::cout << "Cure assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy.getType();
    if (copy._type != "cure")
    {
        this->_type = "";
        std::cout << "Error: Cure assignation operator called with wrong type" << std::endl;
        return (*this);
    }
    return (*this);
}

std::string const & Cure::getType() const
{
    return (this->_type);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure *Cure::clone() const
{
    return (new Cure(this->_type));
}

