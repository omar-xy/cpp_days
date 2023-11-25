/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:35:57 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/25 15:57:11 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = copy._ideas[i];
    }
    return (*this);
}

std::string *Brain::getIdeas()
{
    return (_ideas);
}

void	Brain::setIdeas(std::string ideas)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = ideas;
}

