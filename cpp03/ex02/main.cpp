/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:04:14 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/19 21:06:16 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap t("hero");
	t.attack("godzila");
    t.takeDamage(155);
    t.beRepaired(2);
    t.highFivesGuys();
    return 0;
}