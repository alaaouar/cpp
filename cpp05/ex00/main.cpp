/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:33:02 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/07 19:29:37 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat highGrade("HIM", 150);
        Bureaucrat lowGrade("HER", 1);

        std::cout << highGrade << std::endl;
        std::cout << lowGrade << std::endl;

        highGrade.increment();
        lowGrade.decrement();

        std::cout << highGrade << std::endl;
        std::cout << lowGrade << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}