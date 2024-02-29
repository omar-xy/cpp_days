/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:00:10 by otaraki           #+#    #+#             */
/*   Updated: 2024/02/29 12:14:49 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &copy)
{
    if(this != &copy)
        *this = copy;
    return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    AForm *form[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    std::string formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; i++)
    {
        if (formNames[i] == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (form[i]);
        }
    }
    throw FormNotFoundException();
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return ("Form not found.");
}
