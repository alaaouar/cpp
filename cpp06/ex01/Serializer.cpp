/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:01:53 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/31 19:17:12 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer :: ~Serializer(){}

Serializer::Serializer(const Serializer& other){    *this = other;  }

Serializer& Serializer::operator=(const Serializer& other)  {
    (void)other;
    return (*this);
}

uintptr_t Serializer :: serialize(Data* ptr){
    uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
    return res;
}

Data* Serializer :: deserialize(uintptr_t raw){
    Data* res = reinterpret_cast<Data*> (raw);
    return res;
}