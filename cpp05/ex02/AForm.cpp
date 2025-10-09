/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:47:40 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/09 00:36:18 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form() : _name("default"), _Signed(false), _ToSign(150), _ToExecute(150) {    }

Form::~Form()   {   }

std::string Form::getName() const   {   return _name;        }

bool Form::getIsSigned() const      {   return _Signed;      }

int  Form::getToSign() const        {   return _ToSign;      }

int  Form::getToExecute() const     {   return _ToExecute;   }

Form::Form(const std::string &name, int ToSign, int ToExecute) : 
    _name(name), _Signed(false), _ToSign(ToSign), _ToExecute(ToExecute)
{
    if (ToSign < 1 || ToExecute < 1)
        throw GradeTooHighException();
    if (ToSign > 150 || ToExecute > 150)
        throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, const Form & form)
{
    o << "Form Name: " << form.getName() 
      << ", Signed: " << (form.getIsSigned() ? "Yes" : "No") 
      << ", Grade Required to Sign: " << form.getToSign() 
      << ", Grade Required to Execute: " << form.getToExecute();
    return o;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _ToSign)
        throw GradeTooLowException();
    _Signed = true;
}