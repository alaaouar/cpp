/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:33:02 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/09 04:38:16 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iomanip>

static void sep()
{
    std::cout << std::string(60, '-') << std::endl;
}

int main()
{
    // Create bureaucrats with different grades
    Bureaucrat president("President", 1);
    Bureaucrat alice("Alice", 40);
    Bureaucrat bob("Bob", 130);
    Bureaucrat charlie("Charlie", 50);

    sep();
    std::cout << "Bureaucrats:" << std::endl;
    std::cout << president << std::endl;
    std::cout << alice << std::endl;
    std::cout << bob << std::endl;
    std::cout << charlie << std::endl;
    sep();

    // Create forms via Intern
    Intern someRandomIntern;
    AForm *shrub = NULL;
    AForm *robot = NULL;
    AForm *pardon = NULL;
    try {
        shrub = someRandomIntern.makeForm("shrubbery creation", "home");
        robot = someRandomIntern.makeForm("robotomy request", "Bender");
        pardon = someRandomIntern.makeForm("presidential pardon", "Marvin");
    } catch (const std::exception &e) {
        std::cerr << "Intern failed to create form: " << e.what() << std::endl;
    }

    std::cout << "Forms (initial state):" << std::endl;
    if (shrub) std::cout << *shrub << std::endl;
    if (robot) std::cout << *robot << std::endl;
    if (pardon) std::cout << *pardon << std::endl;
    sep();

    // Signing attempts
    std::cout << "Signing attempts:" << std::endl;
    if (shrub) bob.signForm(*shrub);      // Bob (130) can sign shrub (need 145)
    if (robot) charlie.signForm(*robot);  // Charlie (50) can sign robot (need 72)
    if (pardon) president.signForm(*pardon);// President (1) signs presidential
    sep();

    std::cout << "Forms (after signing):" << std::endl;
    if (shrub) std::cout << *shrub << std::endl;
    if (robot) std::cout << *robot << std::endl;
    if (pardon) std::cout << *pardon << std::endl;
    sep();

    // Execution attempts (with proper executors)
    std::cout << "Execution attempts:" << std::endl;
    try {
        std::cout << "Executing Shrubbery (executor: Bob) ..." << std::endl;
        if (shrub) {
            shrub->execute(bob); // Bob grade 130 <= exec 137 -> OK
            std::cout << "Shrubbery created: home_shrubbery" << std::endl;
        }
    } catch (const std::exception &e) {
        std::cerr << "Shrubbery execution failed: " << e.what() << std::endl;
    }

    try {
        std::cout << "Executing Robotomy (executor: Alice) 3 times ..." << std::endl;
        for (int i = 0; i < 3; ++i)
            if (robot) robot->execute(alice);
    } catch (const std::exception &e) {
        std::cerr << "Robotomy execution failed: " << e.what() << std::endl;
    }

    try {
        std::cout << "Executing Pardon (executor: President) ..." << std::endl;
    if (pardon) pardon->execute(president);
    } catch (const std::exception &e) {
        std::cerr << "Pardon execution failed: " << e.what() << std::endl;
    }
    sep();

    // Show an example of failing: try to execute an unsigned form
    ShrubberyCreationForm unsignedShrub("tmp_unsig");
    std::cout << "Attempting to execute unsigned form (should fail):" << std::endl;
    try {
        unsignedShrub.execute(alice);
    } catch (const std::exception &e) {
        std::cerr << "Expected failure: " << e.what() << std::endl;
    }

    // show unknown form handling
    std::cout << "Ask Intern for unknown form (should throw) ..." << std::endl;
    try {
        AForm *unknown = someRandomIntern.makeForm("unknown form", "none");
        (void)unknown;
    } catch (const std::exception &e) {
        std::cerr << "Intern error: " << e.what() << std::endl;
    }

    sep();
    // cleanup
    delete shrub;
    delete robot;
    delete pardon;
    std::cout << "Demo finished." << std::endl;
    sep();
    return 0;
}