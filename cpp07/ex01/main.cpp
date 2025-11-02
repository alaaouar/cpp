/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:48:06 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/02 12:26:07 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename Temp>
void toprint(const Temp &arr)
{
    std :: cout << arr << std::endl;
}

int main(){
    char arr[5] = "test";
    iter(arr, 4, &toprint);

    int irr[5] = {7, 3, 8, 9, 5};
    iter(irr , 5, &toprint);
}