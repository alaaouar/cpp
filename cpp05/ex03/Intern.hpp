/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 04:35:05 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/09 17:48:54 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <exception>
#include "AForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();

    Form *makeForm(const std::string &formName, const std::string &target) const;

    class UnknownFormException : public std::exception
    {
    public:
        const char *what() const throw() { return "Requested form type is unknown"; }
    };
};

#endif
