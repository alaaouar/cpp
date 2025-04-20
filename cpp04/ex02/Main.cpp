/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:41:28 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 18:49:24 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headers/zoo.hpp"

int main()
{
    std::cout << RED << "=== MY TESTS ===" << RESET << std::endl << std::endl;

    // Corrected: Removed instantiation of AAnimal (abstract class)
    const AAnimal* j = new Dog("Bulldog");
    const AAnimal* i = new Cat("Persian Cat");
    const WrongAnimal* wrongMeta = new WrongAnimal("Wrong Generic AAnimal");
    const WrongAnimal* wrongCat = new WrongCat("Wrong Tabby Cat");
    const Cat* cat = new Cat("Siamese Cat");
    const Dog* dog = new Dog("Golden Retriever");

    std::cout << GREEN << "=== AAnimal Objects ===" << RESET << std::endl;
    std::cout << BLUE << "Dog type: " << RESET << j->getType() << std::endl;
    std::cout << CYAN << "Cat type: " << RESET << i->getType() << std::endl;
    std::cout << BLUE << "Dog makes sound: " << RESET;
    j->makeSound();
    std::cout << CYAN << "Cat makes sound: " << RESET;
    i->makeSound();

    std::cout << BLUE << "Dog has an idea: " << RESET;
    dog->getBrain()->setIdeas("I want to play", 0);
    std::cout << dog->getBrain()->getIdeas(0) << std::endl;

    std::cout << CYAN << "Cat has an idea: " << RESET;
    cat->getBrain()->setIdeas("I want to sleep", 0);
    std::cout << cat->getBrain()->getIdeas(0) << std::endl;

    std::cout << std::endl << MAGENTA << "=== WrongAnimal Objects ===" << RESET << std::endl;
    std::cout << RED << "WrongAnimal type: " << RESET << wrongMeta->getType() << std::endl;
    std::cout << RED << "WrongCat type: " << RESET << wrongCat->getType() << std::endl;
    std::cout << CYAN << "WrongAnimal makes sound: " << RESET;
    wrongMeta->makeSound();
    std::cout << CYAN << "WrongCat makes sound: " << RESET;
    wrongCat->makeSound();

    std::cout << std::endl << GREEN << "=== Cleaning Up ===" << RESET << std::endl;
    delete wrongCat;
    delete cat;
    delete dog;
    delete wrongMeta;
    delete j;
    delete i;

    std::cout << std::endl << RED << "=== SUBJECT TESTS ===" << RESET << std::endl;
    int n = 5;
    AAnimal* Aanimal[n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            Aanimal[i] = new Cat;
        else
            Aanimal[i] = new Dog;
    }
    for (int i = 0; i < n; i++)
    {
        delete Aanimal[i];
    }

    return 0;
}
