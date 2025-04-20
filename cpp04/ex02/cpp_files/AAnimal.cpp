/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:11:09 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/20 18:42:06 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/AAnimal.hpp"

AAnimal::AAnimal(const std::string& type) : type(type) {
    std::cout << "AAnimal of type " << type << " created." << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal of type " << type << " destroyed." << std::endl;
}

std::string AAnimal::getType() const {
    return type;
}
