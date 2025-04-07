/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:05:53 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/07 12:33:40 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
    {
    private:
        int                _fixedPointValue;
        static const int    _fractionalBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed& operator=(const Fixed &copy);

        int getRawBits() const;
        void setRawBits(int const raw);
};

#endif