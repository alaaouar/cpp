/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 04:10:00 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/09 04:07:08 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <stdexcept>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
        this->_target = copy._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (!getIsSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > getToExecute() || executor.getGrade() > getToSign())
        throw AForm::GradeTooLowException();

    std::string filename = _target + "_shrubbery";
    std::ofstream ofs(filename.c_str());
    if (!ofs.is_open())
        throw std::runtime_error("Cannot open file");

    ofs << "       _-_" << std::endl;
    ofs << "    /~~   ~~\\" << std::endl;
    ofs << " /~~         ~~\\" << std::endl;
    ofs << "{               }" << std::endl;
    ofs << " \\  _-     -_  //" << std::endl;
    ofs << "   ~  \\ //  ~" << std::endl;
    ofs << "_- -   | | _- _" << std::endl;
    ofs << "  _ -  | |   -_" << std::endl;
    ofs << "      // \\\\" << std::endl;
    ofs.close();
}
