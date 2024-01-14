/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:00:28 by otaraki           #+#    #+#             */
/*   Updated: 2023/12/01 14:33:45 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

class Brain;

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
    
    this->_brain = new Brain();
    _type = copy.getType();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog	&Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &copy)
    {
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain();
        _type = copy.getType();
    }
    return (*this);
}

Brain    *Dog::getBrain() const
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
