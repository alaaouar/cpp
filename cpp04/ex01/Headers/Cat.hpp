/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:57:56 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 17:24:32 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const std::string& name);
        Cat(const Cat &copy);
        ~Cat();
        Cat &operator=(const Cat &copy);
        void setBrain(Brain *brain);
        Brain* getBrain() const;
        void makeSound() const;
        void setIdeas(std::string idea, int index);
        std::string getIdeas(int index) const;
};

#endif