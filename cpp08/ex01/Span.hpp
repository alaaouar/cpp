/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:23:35 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/11 02:23:31 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <exception>
#include <limits>

class EmptySpanException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return "Empty array!";
        };
};

class TooManyElementsException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return "Impossible to add this number!";
        };
};

class NotEnoughElementsException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return "Need at least two numbers!";
        };
};

class Span
{
private:
    std :: vector <int> vect;
    unsigned int N;
public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int n);
    
    template <typename Iter>
    void addRange(Iter begin, Iter end)
    {
        for (Iter it = begin; it != end; ++it)
        {
            addNumber(*it);
        }
    }
    
    int shortestSpan() const;
    int longestSpan() const;
};
