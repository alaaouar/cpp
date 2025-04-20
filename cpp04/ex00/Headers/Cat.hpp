/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:57:56 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 15:58:20 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        Cat &operator=(const Cat &copy);
        void makeSound() const;
};

#endif