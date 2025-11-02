/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:49:46 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/02 17:06:29 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
    try {
        Array<std::string> arr(5);

        arr[0] = "1337";
        arr[1] = "SCHOOL";
        arr[2] = "TABLES";
        arr[3] = "MACS";
        arr[4] = "MUSIC";
        
        std::cout << arr[3] << std::endl;
        std::cout << arr[10] << std::endl;
    }  catch(const std::exception& e)   {
        std::cerr << e.what() << "--01--" << '\n';
    }
    try {
    Array<int> numbers(10);
    
    numbers[2] = 24;
    std::cout << "number size :" << numbers.size() << std::endl;
    numbers[24] = 1;
    } catch (const std :: exception &e) {
        std::cerr << e.what() << " --02--" << '\n';
    }
    
}