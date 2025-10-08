/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:54:39 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/08 23:51:45 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const       std::string _name;
    bool        _Signed;
    int         _ToSign;
    int         _ToExecute;
public:
    Form();
    Form(const std::string &name, int ToSign, int ToExecute);
    ~Form();
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
    void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream & operator<<(std::ostream & o, const Form & form);

#endif