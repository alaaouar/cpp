/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:41:58 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/26 20:00:37 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()                  {
    Zombie *thenewZombie;

    thenewZombie = newZombie("New Zombie");
    thenewZombie->print();
    randomChump("Random Zombie");
    delete thenewZombie;
}