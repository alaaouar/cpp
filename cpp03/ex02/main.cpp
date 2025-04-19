/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:04:14 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/19 23:33:15 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("ClapTraperrrr");
    ScavTrap scav("ScavTraperrrr");
    FragTrap frag("FragTraperrrr");

    std::cout << "\n--- Testing ClapTrap ---" << std::endl;
    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n--- Testing ScavTrap ---" << std::endl;
    scav.attack("Target2");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();

    std::cout << "\n--- Testing FragTrap ---" << std::endl;
    frag.attack("Target3");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();

    return 0;
}