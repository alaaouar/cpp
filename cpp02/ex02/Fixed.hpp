/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:11:17 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/14 18:08:56 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int value;
		static const int fracBits = 8;
	
	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float x);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
        
		float toFloat ( void ) const;
		int toInt ( void ) const;
        
		Fixed operator+(const Fixed &op) const;
		Fixed operator-(const Fixed &op) const;
		Fixed operator*(const Fixed &op) const;
		Fixed operator/(const Fixed &op) const;
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
        
		bool operator>(const Fixed &op)  const;
		bool operator<(const Fixed &op)  const;
		bool operator>=(const Fixed &op) const;
		bool operator<=(const Fixed &op) const;
		bool operator==(const Fixed &op) const;
		bool operator!=(const Fixed &op) const;
        
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
        
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &str, const Fixed &opCopy);

#endif