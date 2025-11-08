/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:26:58 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/07 23:18:01 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span ::Span() : N(0) {
    
}

Span ::Span(unsigned int N){
    if (N == 0)
        throw EmptySpanException();
    this->N = N;
    vect.reserve(N);
}

Span ::Span(const Span &other){
    this->N = other.N;
    this->vect = other.vect; 
}

Span& Span :: operator=(const Span &other){
    if (this != &other)
    {
        this->N = other.N;
        this->vect = other.vect;
    }
    return *this;
}

Span ::~Span(){
    
}


void Span :: addNumber(int n){
    if (vect.size() >= N)
        throw TooManyElementsException();
    vect.push_back(n);
}

int Span :: shortestSpan() const{
    if (vect.empty())
        throw EmptySpanException();
    if (vect.size() < 2)
        throw NotEnoughElementsException();
    std :: vector <int> sorted = vect;
    std::sort(sorted.begin(), sorted.end());
    int min = std :: numeric_limits<int>::max();
    for (size_t i = 0 ; i < sorted.size() - 1; i++){
        int dif = sorted[i + 1] - sorted[i];
        if (dif < min)
            min = dif;
    }
    return min;
}

int Span :: longestSpan() const{
    if (vect.empty())
        throw EmptySpanException();
    if (vect.size() < 2)
        throw NotEnoughElementsException();
    std :: vector <int> sorted = vect;
    std::sort(sorted.begin(), sorted.end());
    int maxl = sorted.back();
    int minl = sorted.front();
    int maxS = maxl - minl;
    return maxS;
}
