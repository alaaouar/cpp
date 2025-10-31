/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:18:04 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/31 22:49:37 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{
    Data data;

    data.letter = 'F';
    data.number = 23;
    data.strings = "black hole is coming";
    
    uintptr_t raw = Serializer::serialize(&data);
    Data * des = Serializer::deserialize(raw);

    std::cout << "|" << &data << "|" << std::endl;
    std::cout << "Deserialized Data pointer address: " << des << std::endl;
    std::cout << "value num : " << data.number << " letter :" << data.letter << " string :" << data.strings << std::endl;

    std::cout << "value num : " << des->number << " letter :" << des->letter << " string :" << des->strings << std::endl;
    
}
