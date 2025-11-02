/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:27:16 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/02 14:27:29 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h> 

template <typename Tem>
class Array
{
private:
    Tem *data;
    unsigned int size;
public:
    Array(){
        data = NULL;
        size = 0;
    }
    Array(unsigned int n) : size(n){
        data = new Tem[size];
    }
    Array(const Array& other);
    Array& operator=(const Array& copy){
        delete [] data;
        data = new Tem [copy.size];
        for (unsigned int i = 0; i < size ; i++;)
        {
            data[i] = copy.data[i];
        }
    }
    Tem& operator[](unsigned int i) const {
        if (i >= size)
            throw std::runtime_error("out of range");
        return (data[i]);
    }
    unsigned int getsize() const {
        return this->size;
    }
    ~Array(){   delete data     }
};


template<typename Tem>
Array<Tem>::Array(const Array& other) : size(other.size){
    data = new T[size];
    for (unsigned int i = 0; i < size; i++){
        data[i] = other.data[i];
    }
}

#endif 