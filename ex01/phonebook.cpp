/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 03:36:04 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/23 00:59:36 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void) : _id(0) {}

void    PhoneBook::add()
{
    std :: string FirstName, LastName, nickname, phone, secret;
    
    std::cout << START << "           ADD CONTACT          " << END;
	std::cout << "Enter first name: ";
	std::getline(std::cin, FirstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, LastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, secret);
    
    if (FirstName.empty() || LastName.empty() || nickname.empty() || phone.empty() || secret.empty())
    {
        std::cout << "Error: all fields are required" << std::endl;
        return ;
    }
    this->_contacts[this->_id++ % MAX_CONTACTS] = contact(FirstName, LastName, nickname, phone, secret);
    std::cout << "\nContact added successfully." << std::endl;
}

void	PhoneBook::printTable(void)
{
	std::cout << "     index| first name | last name|  nickname" << std::endl;
	for (int i = 0; i < MAX_CONTACTS && i < this->_id; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << _contacts[i].edit_format(this->_contacts[i].get_FirstName()) << "|";
		std::cout << std::setw(10) << _contacts[i].edit_format(this->_contacts[i].get_LastName()) << "|";
		std::cout << std::setw(10) << _contacts[i].edit_format(this->_contacts[i].get_nickname()) << std::endl;
	}
}	

void	PhoneBook::search(void)
{
	std::string index;

	std::cout << START << "           SEARCH CONTACT       " << END;
	if (this->_id == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return ;
	}
	printTable();
	std::cout << "Enter index: ";
	std::getline(std::cin, index);
	if (index.length()!= 1 || !isdigit(index[0]) || index[0] - '0' >= this->_id)
	{
		std::cout << "Error: invalid index." << std::endl;
		return ;
	}
	this->_contacts[index[0] - '0'].contact_data();
	// std:: cout << "           SEARCH CONTACT       " << END;
	// printTable();
}