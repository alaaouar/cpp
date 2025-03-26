/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 22:03:51 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/23 01:05:25 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	main_menu(void)
{
	std::cout << START << "           PHONEBOOK            " << END;
	std::cout << "Available commands: \n- ADD\n- SEARCH\n- EXIT\n" << std::endl;
}

int main()
{
    std :: string command ;
    PhoneBook  phone;

    main_menu();
    while (1)
    {
        std::cout << "insert a command : ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phone.add();
		else if (command == "SEARCH")
            phone.search();
		else if (command == "EXIT")
			break ;
		else
		{
			std::cout << "command not valid" << std::endl;
			continue ;
		}
		main_menu();
	}
	std::cout << CLEAR;
	return (0);
}
