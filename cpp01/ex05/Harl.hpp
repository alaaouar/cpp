/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 20:13:00 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/30 22:32:20 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    error(void);
        void    warning(void);
    public:
        Harl();
        ~Harl();
        void complain(std::string level) ;
};


#endif