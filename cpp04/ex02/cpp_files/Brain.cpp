/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:17:51 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 16:49:41 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/Brain.hpp"

Brain::Brain()
{   
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return *this;
}

void Brain::setIdeas(std::string idea, int index)
{
    if (index >= 0 && index < 100)
        this->ideas[index] = idea;
}

std::string Brain::getIdeas(int index) const
{
    if (index >= 0 && index < 100)
        return this->ideas[index];
    return "";
}

