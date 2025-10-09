/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:32:41 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:24 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>

class Form; // Forward declaration

class Bureaucrat
{
private:
    int _grade;
    const std::string _name;

public:
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
    
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &copy);
    ~Bureaucrat();
    
    void increment();
    void decrement();
    const std::string getName() const;
    int getGrade() const;

    void signForm(Form &form);
};

std::ostream & operator<<(std::ostream & b, const Bureaucrat & bureaucrat);
#endif