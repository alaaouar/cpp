/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:22:53 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/17 22:59:13 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap() : ClapTrap()
{
	// this->_guardmode = false;
	this->_hitPoints = 10;
	this->_energyPoints = 50;
}