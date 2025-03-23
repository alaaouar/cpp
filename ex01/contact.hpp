/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 03:30:52 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/23 00:58:05 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
# include <iomanip>

class contact
{
    public:
        contact(void); // consturctor
        contact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret);
        void    contact_data(void);
        std::string    get_FirstName(void);
        std::string    get_LastName(void);
        std::string    get_nickname(void);
        std::string    edit_format(std::string field);

    private:
        std::string	_firstName;
        std::string	_lastName;
        std::string	_nickname;
        std::string	_phone;
        std::string	_secret;

};


#endif