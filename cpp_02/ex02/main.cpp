/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:08:45 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/20 12:19:07 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main() 
{

	Fixed a;
	Fixed const b( Fixed( 5.05f) / Fixed( 2 ) );
	std::cout << b << std::endl;
	// Test increment and decrement operators
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	
    // // Test comparison operators
    // std::cout << "a > b: " << (a > b) << std::endl;
    // std::cout << "a < b: " << (a < b) << std::endl;
    // std::cout << "a >= b: " << (a >= b) << std::endl;
    // std::cout << "a <= b: " << (a <= b) << std::endl;
    // std::cout << "a == b: " << (a == b) << std::endl;
    // std::cout << "a != b: " << (a != b) << std::endl;

    // // Test min and max functions
	// std::cout << Fixed::max( a, b ) << std::endl;
	// std::cout << Fixed::min( a, b ) << std::endl;

    return 0;
}

