/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:45:03 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 18:53:00 by alaaouar         ###   ########.fr       */
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
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"

class AAnimal {
protected:
    std::string type;

public:
    AAnimal(const std::string& type = "Animal");
    virtual ~AAnimal();

    std::string getType() const;
    virtual void makeSound() const = 0; 
};

#endif