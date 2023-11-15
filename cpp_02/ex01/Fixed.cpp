/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:08:39 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/16 00:00:07 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value * (1 << _frac))
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float value) : _value(((value * (1 << _frac))))
{
	std::cout << "Float constructor called" << std::endl;
}
float Fixed::toFloat( void ) const
{
	return (roundf(this->_value / (1 << this->_frac)));
}

int Fixed::toInt( void ) const
{
	return ((this->_value / (1 << this->_frac)));
}

Fixed::~Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits() const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

 std::ostream& operator<<(std::ostream& os, const Fixed& obj)
 {
	os << obj.toFloat() << "." << roundf(obj._value % (1 << obj._frac));
	return os;
 }