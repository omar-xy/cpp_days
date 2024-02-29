/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:00:18 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/19 01:02:19 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &copy);
        ~Intern();
        Intern	&operator=(const Intern &copy);
        AForm	*makeForm(std::string formName, std::string target);
        class FormNotFoundException : public std::exception
        {
                virtual const char* what() const throw();
        };
};
