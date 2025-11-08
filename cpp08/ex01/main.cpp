/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:51:29 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/07 23:17:34 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(10);

	// add a few numbers individually
	sp.addNumber(6);
	sp.addNumber(3);

	// add multiple numbers using iterator range
	int arr[] = {17, 9, 11, 42, -5, 100};
	std::vector<int> more(arr, arr + sizeof(arr) / sizeof(arr[0]));
	sp.addNumber(more.begin(), more.end());
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}
