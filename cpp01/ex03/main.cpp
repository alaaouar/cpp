/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 01:17:04 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/28 10:08:10 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon gun = Weapon("gun");
        HumanA achraf("achraf", gun);
        achraf.attack();
        gun.setType("assult");
        achraf.attack();
    }
    {
		Weapon katana = Weapon("katana");
		HumanB pixel("pixel");
		pixel.setWeapon(katana);
		pixel.attack();
		katana.setType("knife");
		pixel.attack();
    }
}