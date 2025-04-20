/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:41:28 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 17:04:32 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headers/Animal.hpp"
#include "Headers/Cat.hpp"
#include "Headers/Dog.hpp"
#include "Headers/WrongAnimal.hpp"
#include "Headers/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << GREEN << "=== Animal Objects ===" << RESET << std::endl;
    std::cout << BLUE << "Dog type: " << RESET << j->getType() << std::endl;
    std::cout << BLUE << "Cat type: " << RESET << i->getType() << std::endl;
    std::cout << CYAN << "Animal makes sound: " << RESET;
    meta->makeSound();
    std::cout << CYAN << "Dog makes sound: " << RESET;
    j->makeSound();
    std::cout << CYAN << "Cat makes sound: " << RESET;
    i->makeSound();
    
    std::cout << std::endl << MAGENTA << "=== WrongAnimal Objects ===" << RESET << std::endl;
    std::cout << RED << "WrongAnimal type: " << RESET << wrongMeta->getType() << std::endl;
    std::cout << RED << "WrongCat type: " << RESET << wrongCat->getType() << std::endl;
    std::cout << CYAN << "WrongAnimal makes sound: " << RESET;
    wrongMeta->makeSound();
    std::cout << CYAN << "WrongCat makes sound: " << RESET;
    wrongCat->makeSound();

    std::cout << std::endl << GREEN << "=== Cleaning Up ===" << RESET << std::endl;
    delete wrongCat;
    delete wrongMeta;
    delete meta;
    delete j;
    delete i;
}
