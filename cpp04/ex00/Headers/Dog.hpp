/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:00:34 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 16:00:43 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        Dog &operator=(const Dog &copy);
        void makeSound() const;
        Dog(std::string name);
};

#endif