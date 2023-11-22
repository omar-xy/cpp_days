/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:08:42 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/20 11:00:51 by otaraki          ###   ########.fr       */
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
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		
		// new constructors
		Fixed(const int value);
		Fixed(const float value);
		
		// memeber functions
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

// non-member functions overload << operator
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif