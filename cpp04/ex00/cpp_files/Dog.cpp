/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:59:57 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 16:00:27 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "BARK" << std::endl;
}

Dog::Dog(std::string name) : Animal()
{
    std::cout << "Dog parameterized constructor called" << std::endl;
    this->type = name;
}