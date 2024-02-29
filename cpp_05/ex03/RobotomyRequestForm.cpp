/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:08:41 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/18 23:54:44 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45), _target("Default")
{
    
}


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) , _target(copy._target)
{
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}


RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    (void)copy;
    return (*this);
}


std::string	RobotomyRequestForm::getTarget() const
{
    return (_target);
}


void   RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    executeCheck(executor);
    std::cout << "Brr   "<< _target << " has been robotomized successfully 50% of the time." << std::endl;
    std::cout << "Brr   "<< _target << " has been robotomized successfully 50% of the time." << std::endl;
}