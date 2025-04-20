/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:45:03 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 16:08:45 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal &operator=(const Animal &copy);
        virtual void makeSound() const;
        std::string getType() const;
};

#endif