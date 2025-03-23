/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 03:52:26 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/23 00:58:05 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

contact::contact(void) {}

contact::contact(std::string FirstName, std::string LastName,
	std::string nickname, std::string phone, std::string secret) :
	_firstName(FirstName), _lastName(LastName), _nickname(nickname),
	_phone(phone), _secret(secret) {}


void contact::contact_data(void)
{
	std::cout << START << "           CONTACT INFO         " << END;
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
	std::cin.ignore();
}

std::string	contact::get_FirstName(void)
{
	return (this->_firstName);
}

std::string	contact::get_LastName(void)
{
	return (this->_lastName);
}

std::string	contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string	contact::edit_format(std::string field)
{
	if (field.length() > 10)
	{
		field.resize(9);
		field.append(".");
	}
	return (field);
}
