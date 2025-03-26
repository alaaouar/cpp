/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 22:03:58 by alaaouar          #+#    #+#             */
/*   Updated: 2025/03/20 22:03:59 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;

    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(av[i])
    {
        j=0;
        while(av[i][j])
        {
            av[i][j]=toupper(av[i][j]);
            std::cout<<av[i][j];
            j++;
        }
        i++;
        std :: cout << " ";
    }
    std::cout<<std::endl;
    return 0;
}