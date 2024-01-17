/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:08:41 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/17 04:19:18 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45), _target("Default")
{
    
}


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
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
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
    else if (!getSigned())
        throw AForm::NotSignedException();
    else
    {
        std::cout << "Brr   "<< _target << " has been robotomized successfully 50% of the time." << std::endl;
        std::cout << "Brr   "<< _target << " has been robotomized successfully 50% of the time." << std::endl;
    }
}