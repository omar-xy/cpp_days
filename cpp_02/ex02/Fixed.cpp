/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:08:39 by otaraki           #+#    #+#             */
/*   Updated: 2023/11/20 12:21:33 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

Fixed& Fixed::operator=(const Fixed& value)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &value)
		this->_value = value.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value * (1 << _frac))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _frac)))
{
	std::cout << "Float constructor called" << std::endl;
}
float Fixed::toFloat( void ) const
{
	return ((float)(this->_value ) / (float)(1 << this->_frac));
}

int Fixed::toInt( void ) const
{
	return ((this->_value / (1 << this->_frac)));
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
	os << obj.toFloat();
	return os;
}

// operator + - * /
Fixed Fixed::operator+(const Fixed& other) const
{
    return (Fixed(this->getRawBits() + other.getRawBits()));
}

Fixed Fixed::operator-(const Fixed& other) const 
{
    return (Fixed(this->getRawBits() - other.getRawBits()));
}

Fixed Fixed::operator*(const Fixed& other) const 
{
	Fixed temp;
    temp.setRawBits((this->_value * other.getRawBits()) >> this->_frac);
	return temp;
}

Fixed Fixed::operator/(const Fixed& other) const 
{
    Fixed temp;
    temp.setRawBits((this->_value * (1 << 8) / other.getRawBits()));
	return temp;
}
////// end of the four operators

// the boolean operators
bool Fixed::operator>(const Fixed& data)
{
	return (this->getRawBits() > data.getRawBits());
}

bool Fixed::operator<(const Fixed& data)
{
	return (this->getRawBits() < data.getRawBits());
}

bool Fixed::operator>=(const Fixed& data)
{
	return (this->getRawBits() >= data.getRawBits());
}

bool Fixed::operator<=(const Fixed& data)
{
	return (this->getRawBits() <= data.getRawBits());
}

bool Fixed::operator==(const Fixed& data)
{
	return (this->getRawBits() == data.getRawBits());
}

bool Fixed::operator!=(const Fixed& data)
{
	return (this->getRawBits() != data.getRawBits());
}
// the end of the boolean operators

// the increment and decrement operators
Fixed& Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed& Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}
// the end of the increment and decrement operators


// the min and max functions
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
// the end of the min and max functions