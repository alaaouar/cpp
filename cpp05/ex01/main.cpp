/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:33:02 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/09 00:02:07 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Form formalowla("FormA", 50, 100);
        Form formtanya("FormB", 1, 1);
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Form created: " << formalowla << std::endl;
        std::cout << "Form created: " << formtanya << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        Bureaucrat burolowl("lowl", 40);
        Bureaucrat burotany("tany", 60);
        burolowl.signForm(formalowla);
        burotany.signForm(formtanya);
        std::cout << "-----------------------------------" << std::endl;
        std::cout << formalowla<< std::endl;
        std::cout << formtanya << std::endl;
        std::cout << "-----------------------------------" << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error creating form: " << e.what() << std::endl;
    }
    return 0;
}