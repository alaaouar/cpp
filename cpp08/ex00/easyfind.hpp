/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:27:15 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/07 22:20:26 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class occurrenceexcp : std::exception
{
    public:
    const char* what() const throw()
    {
        return "No occurence is found!";
    }
};

template <typename T>
typename T ::iterator easyfind(T& container, int i)
{
    typename T:: iterator j = std::find(container.begin(), container.end() , i);
    
    if (j == container.end())
    {
        throw occurrenceexcp();
    }
    return j;
}



#endif