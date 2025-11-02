/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:55:21 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/01 19:39:20 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) { (void)other; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

std::string ScalarConverter :: inpuType	(const std :: string &literal)
{
    if(literal == "nanf" || literal ==  "-inff" || literal == "+inff")
        return "float";
    if(literal == "nan" || literal == "-inf" || literal == "+inf")
        return "double"; 
    if(literal.length() == 1 && !std::isdigit(literal[0]))
        return "char";
    char *pEnd;
    long val = 0;
    val = strtol(literal.c_str(), &pEnd, 10);
    if(*pEnd == '\0' && val >= INT_MIN && val <= INT_MAX)
        return "int";
    if(!literal.empty() && literal[literal.length() - 1] == 'f')
    {
        std::string text;
        char *pfend;
        text = literal.substr(0, literal.length() - 1);
        strtod(text.c_str(), &pfend);
        if(*pfend == '\0')
            return "float";
    }
    char *pdend;
    strtod(literal.c_str(), &pdend);
    if(*pdend == '\0')
        return "double";
    
    return "unknown!";
}

void ScalarConverter::convert(const std::string &literal)
{
    double data = 0;
    std::cout << "Converting literal: " << literal << std::endl;

    if (literal.empty())
    {
        std::cerr << "Error: Empty literal" << std::endl;
        return;
    }
    for (size_t i = 0; i < literal.length(); ++i)
    {
        if (!isprint(literal[i]))
        {
            std::cerr << "Error: Non-printable character in literal" << std::endl;
            return;
        }
    }
    if (inpuType(literal) == "char")            {
        char c = literal[0];
        data = static_cast<double>(c);
    }   else if (inpuType(literal) == "int")    {
        data = atoi(literal.c_str()); 
    }   else if (inpuType(literal) == "double") {
        data = strtod(literal.c_str(), NULL);
    }   else if (inpuType(literal) == "float")  {
        data = static_cast<double> (strtof(literal.c_str(), NULL));
    }   else    {
        std::cout << "conversion impossible!" << std::endl;
        return ;
    }
    CharPrint(data);
    IntPrint(data);
    FloatPrint(data);
    DoublePrint(data);
}

void ScalarConverter::IntPrint(double literal)
{
    std::cout << "int: ";
    if (std::isnan(literal) || literal < static_cast<double>(INT_MIN) || literal > static_cast<double>(INT_MAX))
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        int intValue = static_cast<int>(literal);
        std::cout << intValue << std::endl;
    }
}

void ScalarConverter::FloatPrint(double literal)
{
    std::cout << "float: ";
    std::cout << static_cast<float>(literal) << "f" << std::endl;
}

void ScalarConverter::DoublePrint(double literal)
{
    std::cout << "double: ";
    std::cout << static_cast<double>(literal) << std::endl;
}

void ScalarConverter::CharPrint(double literal)
{
    std::cout << "char: ";
    if (std::isnan(literal) || literal < 0 || literal > 255)
    {
        std::cout << "impossible" << std::endl;
    }
    else if (!isprint(static_cast<char>(literal)))
    {
        std::cout << "Non displayable" << std::endl;
    }
    else
    {
        char charValue = static_cast<char>(literal);
        std::cout << charValue << std::endl;
    }
}
