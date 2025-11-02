/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:27:16 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/02 17:01:45 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>
#include <stdexcept>

template <typename T>
class Array
{
private:
    T *data;
    unsigned int _size;
public:
    Array(){
        data = NULL;
        _size = 0;
    }
    Array(unsigned int n) : _size(n){
        data = new T[_size];
    }
    Array(const Array& other);
    Array& operator=(const Array& copy){
        if (this == &copy)
            return *this;
        delete [] data;
        _size = copy._size;
        if (_size)
            data = new T[_size];
        else
            data = NULL;
        for (unsigned int i = 0; i < _size ; i++)
            data[i] = copy.data[i];
        return *this;
    }
    T& operator[](unsigned int i) {
        if (i >= _size)
            throw std::out_of_range("out of range");
        return data[i];
    }
    const T& operator[](unsigned int i) const {
        if (i >= _size)
            throw std::out_of_range("out of range");
        return data[i];
    }
    unsigned int size() const {
        return this->_size;
    }
    ~Array(){   delete [] data;     }
};


template<typename T>
Array<T>::Array(const Array& other) : _size(other._size){
    data = new T[_size];
    for (unsigned int i = 0; i < _size; i++){
        data[i] = other.data[i];
    }
}

#endif 