/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:47:55 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/02 12:22:48 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename Temp>
void    iter (Temp *array, size_t size, void (*func) (const Temp&)){
    if (size == 0)
    {
        std :: cout << "Empty array" << std :: endl;
        return;
    }
    for (size_t i = 0 ; i < size ; i++)
    {
        std :: cout << "array[" << i << "]" << std ::endl;
        func(array[i]);
    }
}

#endif