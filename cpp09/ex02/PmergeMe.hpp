/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 00:44:46 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/17 02:45:49 by alaaouar         ###   ########.fr       */
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
#include <iomanip>

class PmergeMe
{
private:
    std::vector<int> vect;
    std::deque<int> deq;
    std::vector<int> vector_sort(std::vector<int> &vectt); 
	std::deque<int> deque_sort(std::deque<int>& data);
    std::vector<size_t> jacob_algo(size_t n);
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void run(int ac, char **av);
    void parsing(int ac, char **av);
};

#endif