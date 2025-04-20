/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:57:41 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 17:24:51 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const std::string &name) : Animal(name)
{
    std::cout << "Cat parameterized constructor called" << std::endl;
    this->type = name;
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*copy.brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

void Cat::setBrain(Brain *brain)
{
    this->brain = brain;
}

Brain* Cat::getBrain() const
{
    return this->brain;
}

void Cat::setIdeas(std::string idea, int index)
{
    this->brain->setIdeas(idea, index);
}

std::string Cat::getIdeas(int index) const
{
    return this->brain->getIdeas(index);
}