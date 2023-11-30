/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:41:30 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/29 22:31:02 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria()
{
    this->_type = "cure";
    // std::cout << "Cure default constructor called" << std::endl;
}


Cure::Cure(const Cure &copy)
{
    // std::cout << "Cure copy constructor called" << std::endl;
    *this = copy;
}

Cure::~Cure()
{
    // std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
    // std::cout << "Cure assignation operator called" << std::endl;
    if (this != &copy)
        this->_type = copy.getType();
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
    return (new Cure());
}
