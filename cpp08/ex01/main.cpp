/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:51:29 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/11 02:24:05 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(10);

	sp.addNumber(6);
	sp.addNumber(3);

	int arr[] = {17, 9, 11, 42, -5, 100};
	
	std::vector<int> more(arr, arr + sizeof(arr) / sizeof(arr[0]));
	sp.addRange(more.begin(), more.end());
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
