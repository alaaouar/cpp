/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:33:02 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/25 00:08:45 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Intern intern;
	Bureaucrat boss("Boss", 1);

	try
	{
		Form *f = intern.makeForm("robotomy", "robo");
		std::cout << "Created: " << f->getName() << std::endl;
		boss.signForm(*f);
		f->execute(boss);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form *f = intern.makeForm("shrubbery", "shiba");
		std::cout << "Created: " << f->getName() << std::endl;
		boss.signForm(*f);
		f->execute(boss);
		delete f;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form *f = intern.makeForm("unknown", "target");
		delete f;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}