/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:35:57 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/02 12:09:44 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename F>
F min(F x,F y){
    if (x >= y)
        return y;
    else
        return x;
        
}

template <typename F>
F max(F x,F y){
    if (y >= x)
        return y;
    else
        return y;
}

template <typename F>
void swap(F &x, F &y){
    F tmp;
    
    tmp = x;
    x = y;
    y = tmp;
}

#endif