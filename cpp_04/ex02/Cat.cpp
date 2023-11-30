/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:59:57 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/30 02:16:58 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
    this->_brain = new Brain();
    this->_brain->setIdeas("cat Brain");
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brain = new Brain();
    _type = copy.getType();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat	&Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &copy)
    {
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain();
        _type = copy.getType();
    }
    return (*this);
}

Brain    *Cat::getBrain() const
{
    return (_brain);
}

void	Cat::setType(std::string type)
{
    _type = type;
}

void	Cat::makeSound() const
{
    std::cout << "Moew moew moew" << std::endl;
}
