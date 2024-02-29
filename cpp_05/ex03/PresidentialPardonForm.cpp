/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:53:31 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/19 00:58:34 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 25, 5), _target("Default")
{
}


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    *this = copy;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}


PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{

    (void)copy;
    return (*this);
}


std::string	PresidentialPardonForm::getTarget() const
{
    return (_target);
}



void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

    executeCheck(executor);
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}




