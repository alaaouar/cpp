/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:09:07 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/19 23:30:10 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Claper"), _hitPoints(10), _energyPoints(10), _attackDamage(5)
{
    std::cout << "Default constructor called for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(5)
{
    std::cout << "Parameterized constructor called for ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called for ClapTrap" << std::endl;
    *this = copy;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called"<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy or hit points!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;
    }
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Hit points left: " << _hitPoints << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy or hit points!" << std::endl;
        return;
    }
    _hitPoints += amount;
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " points! Hit points now: " << _hitPoints << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "Copy assignment operator called for ClapTrap" << std::endl;
    if (this != &copy)
    {
        _name = copy._name;
        _hitPoints = copy._hitPoints;
        _energyPoints = copy._energyPoints;
        _attackDamage = copy._attackDamage;
    }
    return *this;
}
