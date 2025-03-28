/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 01:17:41 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/28 05:29:33 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()                    {   }

Weapon::Weapon(std::string type)    {
    setType(type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}
const std::string &Weapon::getType() const
{
	return (_type);
}
