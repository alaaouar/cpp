/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:10:57 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/14 16:13:48 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &copy)
{
	this->value = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	this->value = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
    return (this->value);
}

void Fixed::setRawBits( int const raw )
{
    this->value = raw;
}

Fixed::Fixed(const int x)
{
	this->value = x << this->fracBits;
}

Fixed::Fixed(const float x)
{
	this->value = roundf(x * (1 << this->fracBits));
}

int Fixed::toInt( void ) const
{
	return (roundf(this->value / (1 << this->fracBits)));
}

float Fixed::toFloat( void ) const
{
	return (float(this->value / (float)(1 << this->fracBits)));
}

std::ostream &operator<<(std::ostream &str, const Fixed &opCopy)
{
    str << opCopy.toFloat();
    return (str);
}

Fixed Fixed::operator+(const Fixed &op) const
{
	return (Fixed(this->toFloat() + op.toFloat()));
}

Fixed Fixed::operator-(const Fixed &op) const
{
	return (Fixed(this->toFloat() - op.toFloat()));
}

Fixed Fixed::operator*(const Fixed &op) const
{
	return (Fixed(this->toFloat() * op.toFloat()));
}

Fixed Fixed::operator/(const Fixed &op) const
{
	return (Fixed(this->toFloat() / op.toFloat()));
}

Fixed &Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	this->value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this;
	this->value--;
	return (tmp);
}

bool Fixed::operator>(const Fixed &op) const
{
	return (this->toFloat() > op.toFloat());
}

bool Fixed::operator<(const Fixed &op) const
{
	return (this->toFloat() < op.toFloat());
}

bool Fixed::operator>=(const Fixed &op) const
{
	return (this->toFloat() >= op.toFloat());
}

bool Fixed::operator<=(const Fixed &op) const
{
	return (this->toFloat() <= op.toFloat());
}

bool Fixed::operator==(const Fixed &op) const
{
	return (this->toFloat() == op.toFloat());
}

bool Fixed::operator!=(const Fixed &op) const
{
	return (this->toFloat() != op.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}