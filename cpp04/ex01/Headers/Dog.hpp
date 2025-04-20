/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:00:34 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 17:30:09 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(const std::string& name); 
    Dog(const Dog& copy);
    ~Dog();

    Dog& operator=(const Dog& copy);
    void makeSound() const;
    void setBrain(Brain* brain);
    Brain* getBrain() const;

private:
    Brain* brain;
};

#endif