/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:47:21 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/14 15:28:00 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    
    a = Fixed( 1234.4321f );
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.int_forma() << " as integer" << std::endl;
    std::cout << "b is " << b.int_forma() << " as integer" << std::endl;
    std::cout << "c is " << c.int_forma() << " as integer" << std::endl;
    std::cout << "d is " << d.int_forma() << " as integer" << std::endl;
    
    return 0;
}