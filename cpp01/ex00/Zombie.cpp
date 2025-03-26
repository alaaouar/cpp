/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:42:01 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/26 19:53:52 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)    {
    this->_name = name;
    std::cout << "Zombie \"" << _name << "\" created" << std::endl;
}

Zombie::~Zombie()                   {
	std::cout << "Zombie \"" << _name << "\" destroyed" << std::endl;
}

void Zombie::print()                {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
