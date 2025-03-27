/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 23:40:53 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/27 00:31:56 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()      {
    Zombie *horde;
    int N = 3;
    int i = 0;
    
    horde = zombieHorde(N, "Horde");
    while (i < N)
    {
        std::cout << "Index " << i <<": ";
        horde[i].announce();
        i++;
    }
    delete[] horde;
}
