/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:01:53 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 17:27:06 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const std::string &name);
        WrongCat(const WrongCat &copy);
        ~WrongCat();
        WrongCat &operator=(const WrongCat &copy);
        void makeSound() const;
};

#endif