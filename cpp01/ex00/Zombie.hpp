/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:47:22 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/26 19:52:32 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie();

    void    print(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif