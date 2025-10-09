/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:54:39 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/09 03:30:44 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const       std::string _name;
    bool        _Signed;
    int         _ToSign;
    int         _ToExecute;
public:
    AForm();
    AForm(const std::string &name, int ToSign, int ToExecute);
    virtual ~AForm();
    virtual     void execute(const Bureaucrat& executor) const = 0;
    std::string getName()   const;
    bool    getIsSigned()   const;
    int     getToSign()     const;
    int     getToExecute()  const;
    class GradeTooHighException : public std::exception
    {
        public:
            const char * what() const throw()
            {
                return "Grade too high";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char * what() const throw()
            {
                return "Grade too low";
            }
    };
    class NotSignedException : public std::exception
    {
        public:
            const char * what() const throw()
            {
                return "Form not signed";
            }
    };
    void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream & operator<<(std::ostream & o, const AForm & form);

#endif