/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:04:14 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/19 23:15:33 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo");
    clap1.attack("ClapTwo");
    clap2.takeDamage(5);
    clap2.beRepaired(3);
    return 0;
}