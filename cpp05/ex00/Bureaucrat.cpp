/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:51:20 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/07 19:36:54 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :  _grade(150) ,_name("NONE"){ }

Bureaucrat::~Bureaucrat()   { }

const std::string Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

Bureaucrat::Bureaucrat(const std::string &name, int grade) :  _grade(grade) ,_name(name)
{
    if (grade < 1)
        throw GradeTooLowException();
    else if(grade > 150)
        throw GradeTooHighException();
    else
        _grade = grade;
};

void Bureaucrat::decrement()
{
    _grade--;
    if (_grade < 1)
        throw GradeTooLowException();
}

void Bureaucrat::increment()
{
    _grade++;
    if (_grade > 150)
        throw GradeTooHighException();
}

std::ostream & operator<<(std::ostream & b, const Bureaucrat & bureaucrat)
{
    b << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return b;
}