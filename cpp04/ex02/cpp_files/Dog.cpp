/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:59:57 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 18:44:22 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const std::string &name) : AAnimal(name)
{
    std::cout << "Dog parameterized constructor called" << std::endl;
    this->type = name;
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*copy.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "BARK" << std::endl;
}

void Dog::setBrain(Brain *brain)
{
    this->brain = brain;
}

Brain *Dog::getBrain() const
{
    return this->brain;
}