/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:11:09 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 17:14:57 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Unknown";
}

Animal::Animal(const std::string &name)
{
    std::cout << "Animal parameterized constructor called" << std::endl;
    this->type = name;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void Animal :: makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}