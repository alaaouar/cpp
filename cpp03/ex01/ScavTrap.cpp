/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:22:53 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/19 22:13:53 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap() : ClapTrap()	{
	this->_guardmode = false;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Default Constructor announced" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)	{
	this->_guardmode = copy._guardmode;
	std::cout << "ScavTrap Copy Constructor announced" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)	{
	this->_guardmode = false;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Constructor for the name " << this->_name << " announced" << std::endl;
}

ScavTrap::~ScavTrap()	{
	std::cout << "ScavTrap Deconstructor for " << this->_name << " announced" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << ", because he has no energy points left." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guardmode == false)
	{
		this->_guardmode = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already guarding the gate." << std::endl;
}
