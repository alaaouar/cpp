/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 04:35:30 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/09 18:01:00 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <algorithm>

Intern::Intern() {}
Intern::Intern(const Intern &other) { (void)other; }
Intern &Intern::operator=(const Intern &other) { (void)other; return *this; }
Intern::~Intern() {}

Form *Intern::makeForm(const std::string &formName, const std::string &target) const
{
    std::string name = formName;
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);

    if (name == "shrubberycreationform" || name == "shrubbery creation" || name == "shrubbery")
        return new ShrubberyCreationForm(target);
    if (name == "robotomyrequestform" || name == "robotomy request" || name == "robotomy")
        return new RobotomyRequestForm(target);
    if (name == "presidentialpardonform" || name == "presidential pardon" || name == "pardon")
        return new PresidentialPardonForm(target);

    throw Intern::UnknownFormException();
}
