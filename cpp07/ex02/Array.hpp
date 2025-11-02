/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:27:16 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/02 14:56:54 by alaaouar         ###   ########.fr       */
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
    unsigned int _size;
public:
    Array(){
        data = NULL;
        _size = 0;
    }
    Array(unsigned int n) : _size(n){
        data = new Tem[_size];
    }
    Array(const Array& other);
    Array& operator=(const Array& copy){
        delete [] data;
        data = new Tem [copy._size];
        for (unsigned int i = 0; i < _size ; i++)
            data[i] = copy.data[i];
    }
    Tem& operator[](unsigned int i) const {
        if (i >= _size)
            throw std::runtime_error("out of range");
        return (data[i]);
    }
    unsigned int size() const {
        return this->_size;
    }
    ~Array(){   delete data;     }
};


template<typename Tem>
Array<Tem>::Array(const Array& other) : _size(other._size){
    data = new Tem[_size];
    for (unsigned int i = 0; i < _size; i++){
        data[i] = other.data[i];
    }
}

#endif 