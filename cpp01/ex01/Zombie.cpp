/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 00:19:47 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/27 00:20:55 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()                    {   }

Zombie::~Zombie()                   {   }

Zombie::Zombie(std::string name)    {
	this->_name = name;
}

void Zombie::announce()             {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
