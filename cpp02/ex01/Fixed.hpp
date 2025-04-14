/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:47:24 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/14 15:28:17 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>


class Fixed
{
	private:
		int	_fval;
		static const int _fract_bits;

	public:
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& copy);
		~Fixed();

		Fixed &operator=(const Fixed &src);

		float float_forma(void)const;
		int int_forma(void)const;
		int getRawBits(void)const;
		void setRawBits(int const raw);
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);