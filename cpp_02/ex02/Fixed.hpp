/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:08:42 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/16 20:40:27 by otaraki          ###   ########.fr       */
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
		// canonical form
		Fixed();
		Fixed(const Fixed& value);
		Fixed& operator=(const Fixed& value);
		~Fixed();
		
		// additional constructors
		Fixed(const int value);
		Fixed(const float value);
		
		// member functions
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		
		// additional member functions: overload basic operators
		Fixed operator+(const Fixed& other) const;
    	Fixed operator-(const Fixed& other) const;
    	Fixed operator*(const Fixed& other) const;
    	Fixed operator/(const Fixed& other) const;

		// additional member functions: overload comparison operators
    	bool operator>(const Fixed& data);
    	bool operator<(const Fixed& data);
    	bool operator>=(const Fixed& data);
    	bool operator<=(const Fixed& data);
    	bool operator==(const Fixed& data);
    	bool operator!=(const Fixed& data);
		
		//additional member functions: overload increment and decrement operators
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		// additional member functions: overload min and max functions
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
