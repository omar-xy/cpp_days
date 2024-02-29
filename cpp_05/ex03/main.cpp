/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:43:58 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/19 01:14:36 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try {
        std::cout << "---------------------" << std::endl;
        std::cout << "ShrubberyCreationForm " << std::endl;
        Bureaucrat  b1("B1", 1);
        Bureaucrat  b2("B2", 2);
        
        Intern a;
        AForm *f = a.makeForm("ShrubberyCreationForm", "home");
        b1.signForm(*f);
        b1.executeForm(*f);
        delete f;
        std::cout << "---------------------" << std::endl;
        
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}