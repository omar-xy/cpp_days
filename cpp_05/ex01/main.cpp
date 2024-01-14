/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:43:58 by otaraki           #+#    #+#             */
/*   Updated: 2024/01/14 14:22:23 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


int main()
{
    
    try {
        Form form("Form1", 1, 1);
        std::cout << form << std::endl;
        Bureaucrat bureaucrat("Bureaucrat1", 2);
        std::cout << bureaucrat << std::endl;
        form.beSigned(bureaucrat);
        form.sginForm(bureaucrat);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    


    
}