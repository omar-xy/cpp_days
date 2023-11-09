/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:44:12 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/09 18:54:38 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;


	std::cout << "• The memory address of the string variable: " << &brain << std::endl;
	std::cout << "• The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "• The memory address held by stringPTR: " << &stringREF << std::endl;

	std::cout << "• The value of the string variable: " << brain << std::endl;
	std::cout << "• The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "• The value pointed to by stringREF: " << stringREF << std::endl;
}