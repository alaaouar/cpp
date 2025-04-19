/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:02:32 by alaaouar          #+#    #+#             */
/*   Updated: 2025/04/19 21:03:00 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string init_name);
        FragTrap(FragTrap const &src);
        ~FragTrap();
        FragTrap &operator=(FragTrap const &src);
        void highFivesGuys();
};