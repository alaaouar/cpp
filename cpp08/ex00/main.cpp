/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:12:03 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/07 22:17:50 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

    #include <vector>
    #include  <list>

int main()
{
    std :: vector <int> v;

    v.push_back(4);
    v.push_back(9);
    v.push_back(1);

    try {
        std :: vector <int>::iterator target = easyfind(v, 9);
        std :: cout << "vect value : " << *target << std :: endl;
    }   catch (const std :: exception &e) {
        std::cerr << "Vector: " << e.what() << std::endl;
    }

    std :: list <int> l;

    l.push_back(3);
    l.push_back(10);
    l.push_back(20);

    try {
        std :: list <int>::iterator target = easyfind(l, 10);
        std :: cout << "list value : " << *target << std :: endl;
    }   catch (const std :: exception &e) {
        std::cerr << "list: " << e.what() << std::endl;
    }
}