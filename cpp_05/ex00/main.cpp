/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:43:58 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/13 22:46:35 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat	bureaucrat("Bureaucrat", 1);
        std::cout << bureaucrat;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat	bureaucrat("Bureaucrat", 2);
        std::cout << bureaucrat;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}