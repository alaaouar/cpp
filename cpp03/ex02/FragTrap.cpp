/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:02:34 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/19 21:04:04 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor called from FragTrap\n";
    _name = "Default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

FragTrap::FragTrap(std::string initName) : ClapTrap(initName)
{
    std::cout << "Parameterized constructor called from FragTrap\n";
    _name = initName;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << "Copy constructor called from FragTrap\n";
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called from FragTrap\n";
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
    std::cout << "Copy assignment operator called from FragTrap\n";
    if (this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDamage = src._attackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap requests a high five!\n";
}
