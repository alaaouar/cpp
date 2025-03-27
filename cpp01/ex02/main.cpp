/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 01:10:16 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/27 01:15:27 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)      {
	std::string  string    = "HI THIS IS BRAIN";
	std::string *stringPRT = &string;
	std::string &stringREF =  string;

	std::cout << "The memory address of the string variable: "  << &string      << std::endl;
	std::cout << "The memory address held by stringPTR: "       <<  stringPRT   << std::endl;
	std::cout << "The memory address held by stringREF: "       << &stringREF   << std::endl;
	std::cout <<                                                                   std::endl;
	std::cout << "The value of the string variable: "           <<  string      << std::endl;
	std::cout << "The value pointed to by stringPTR: "          << *stringPRT   << std::endl;
	std::cout << "The value pointed to by stringREF: "          <<  stringREF   << std::endl;
}
