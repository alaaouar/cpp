/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:47:27 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/14 15:28:41 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

Fixed::Fixed(): _fval(0)
{
	std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Fixed Int Constructor called" << std::endl;
	this->_fval = input << this->_fract_bits;
}

Fixed::Fixed(const float input)
{
	std::cout << "Fixed Float Constructor called" << std::endl;
	this->_fval = roundf(input * (1 << this->_fract_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Fixed Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Deconstructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this != &src)
		this->_fval = src.getRawBits();
	return *this;
}

float	Fixed::float_forma(void)const
{
	return ((float)this->_fval / (float)(1 << this->_fract_bits));
}

int	Fixed::int_forma(void)const
{
	return (this->_fval >> this->_fract_bits);
}

int	Fixed::getRawBits(void)const
{
	return (this->_fval);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fval = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.float_forma();
	return (o);
}