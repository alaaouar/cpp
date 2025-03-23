/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 22:07:00 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/23 19:36:26 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# define START "\033[2J\033[H*******************************\n"
# define END "\n*******************************\n"
# define MAX_CONTACTS 8
# define CLEAR "\033[2J\033[H"

class PhoneBook
{
	public:
		PhoneBook(void);
		void add(void);
		void search(void);

	private:
		int		_id;
		contact	_contacts[MAX_CONTACTS];
		void	printTable(void);
};

# endif