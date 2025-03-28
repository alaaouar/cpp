/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 01:18:05 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/28 05:33:09 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


static Weapon noWeapon("No weapon");

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)           {
}

void HumanB::attack()                                                   {
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)                                  {
	_weapon = &weapon;
}
