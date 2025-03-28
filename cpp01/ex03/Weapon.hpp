/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 04:46:52 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/28 05:29:38 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <new>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon();
        Weapon(std::string type);

        void    setType(std::string type);

        const std::string &getType() const;
};


#endif