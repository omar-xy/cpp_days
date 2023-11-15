/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:08:42 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/15 23:40:23 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>


class Fixed
{
	private:
		int _value;
		static const int _frac = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		void display() const ;
};


#endif


// class MyClass {
// private:
//     int data;
//     std::string name;

// public:
//     // Default constructor
//     MyClass() : data(0), name("Default") {
//         std::cout << "Default constructor" << std::endl;
//     }

//     // Copy constructor
//     MyClass(const MyClass& other) : data(other.data), name(other.name) {
//         std::cout << "Copy constructor" << std::endl;
//     }

//     // Copy assignment operator
//     MyClass& operator=(const MyClass& other) {
//         std::cout << "Copy assignment operator" << std::endl;
//         if (this != &other) {
//             data = other.data;
//             name = other.name;
//         }
//         return *this;
//     }


//     // Destructor
//     ~MyClass() {
//         std::cout << "Destructor" << std::endl;
//     }
// };mot  lqhba ymak alighadi is7e7e lia a77777

// int main() {
//     // Default constructor
//     MyClass obj1;

//     // Copy constructor
//     MyClass obj3 = obj2;

//     // Copy assignment operator
//     MyClass obj4;
//     obj4 = obj3;


//     // Destructor for all objects when they go out of scope

//     return 0;
// }
