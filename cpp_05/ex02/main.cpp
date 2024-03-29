/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:43:58 by otaraki           #+#    #+#             */
/*   Updated: 2024/02/29 11:45:28 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        std::cout << "---------------------" << std::endl;
        std::cout << "ShrubberyCreationForm " << std::endl;
        Bureaucrat  b1("B1", 1);
        Bureaucrat  b2("B2", 2);

        AForm *f1 = new ShrubberyCreationForm("S1");
        b1.executeForm(*f1);
        b2.executeForm(*f1);
        std::cout << *f1 << std::endl;
        b1.signForm(*f1);
        b1.executeForm(*f1);
        b2.executeForm(*f1);
        std::cout << *f1 << std::endl;
        delete f1;

        std::cout << "---------------------" << std::endl;
        std::cout << "RobotomyRequestForm " << std::endl;
        Bureaucrat  b3("B3", 3);
        AForm *f2 = new RobotomyRequestForm("R1");
        b3.executeForm(*f2);
        std::cout << *f2 << std::endl;
        b3.signForm(*f2);
        b3.executeForm(*f2);
        std::cout << *f2 << std::endl;
        delete f2;

        std::cout << "---------------------" << std::endl;
        std::cout << "PresidentialPardonForm " << std::endl;
        Bureaucrat  b4("B4", 4);
        AForm *f3 = new PresidentialPardonForm("P1");
        b4.executeForm(*f3);
        std::cout << *f3 << std::endl;
        b4.signForm(*f3);
        b4.executeForm(*f3);
        std::cout << *f3 << std::endl;
        delete f3;
        
    }
    catch (std::exception &e) {
        std::cout << "TEST" << std::endl;
        std::cout << e.what() << std::endl;
    }
    
}