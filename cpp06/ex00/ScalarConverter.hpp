/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@local>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:00:00 by user               #+#    #+#             */
/*   Updated: 2025/10/26 00:00:00 by user              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <climits>
#include <cmath>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);
	~ScalarConverter();
public:
	static void convert     (const std::string &literal);
    static void IntPrint    (double literal);
    static void FloatPrint  (double literal);
    static void DoublePrint (double literal);
    static void CharPrint   (double literal);
};

#endif

