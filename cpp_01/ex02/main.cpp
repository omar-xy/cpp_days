/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:44:12 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/14 02:01:05 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	stringREF = "xnxx";


	std::cout << "• The memory address of the string variable: " << &brain << std::endl;
	std::cout << "• The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "• The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "• The value of the string variable: " << brain << std::endl;
	std::cout << "• The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "• The value pointed to by stringREF: " << stringREF << std::endl;
}