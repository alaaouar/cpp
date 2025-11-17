/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 00:44:46 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/17 01:41:09 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <climits>
#include <ctime>

class PmergeMe
{
private:
    std::vector<int> vect;
    std::deque<int> deq;
    std::vector<int> vector_sort(std::vector<int> &vectt); 
    std::vector<size_t> jacob_algo(size_t n);
    template <typename Container>
		void Inserting(Container& cont, int value, size_t end)
		{
			 if (cont.empty()) 
    		{
       			cont.push_back(value);
        		return;
    		}
			size_t left = 0;
			size_t right = end;
			while(left <= right)
			{
				size_t mid = (left + right) / 2;
				if(cont[mid] == value)
				{
					cont.insert(cont.begin() + mid, value);
					return;
				}
				else if(cont[mid] < value)
					left = mid + 1;
				else
				{	
					if(mid == 0)
					{
						left = 0;
						break;
					}
					right = mid - 1;
				}
			}
			cont.insert(cont.begin() + left, value);
		};
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void run(int ac, char **av);
    void parsing(int ac, char **av);
};

#endif