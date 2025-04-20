/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:14:34 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 16:18:52 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &copy);
        ~Brain();
        Brain &operator=(const Brain &copy);
        void setIdeas(std::string idea, int index);
        std::string getIdeas(int index) const;
};

#endif