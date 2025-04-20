/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:02:09 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 16:02:22 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongMeow" << std::endl;
}

