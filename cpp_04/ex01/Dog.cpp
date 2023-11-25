/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:00:28 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/25 16:32:08 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
    this->_brain = new Brain();
    this->_brain->setIdeas("Dog brain");
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog	&Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    _type = copy.getType();
    return (*this);
}

Brain    *Dog::getBrain()
{
    return (_brain);
}

void	Dog::setType(std::string type)
{
    _type = type;
}

void	Dog::makeSound() const
{
    std::cout << "How how how" << std::endl;
}

/* ************************************************************************** */