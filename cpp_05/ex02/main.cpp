/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:43:58 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/15 23:56:22 by otaraki          ###   ########.fr       */
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
        Bureaucrat  bureaucrat("Bureaucrat", 1);
        ShrubberyCreationForm   shrubbery("Home");
        RobotomyRequestForm     robotomy("Robot");
        PresidentialPardonForm  pardon("Pardon");

        std::cout << bureaucrat << std::endl;
        std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << pardon << std::endl;

        bureaucrat.signForm(shrubbery);
        bureaucrat.signForm(robotomy);
        bureaucrat.signForm(pardon);

        bureaucrat.executeForm(shrubbery);
        bureaucrat.executeForm(robotomy);
        bureaucrat.executeForm(pardon);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}