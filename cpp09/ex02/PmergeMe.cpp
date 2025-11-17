/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 00:46:05 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/17 01:37:16 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
    if(this != &other)
        *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if(this != &other)
        *this = other;
    return *this;
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe :: parsing(int ac, char **av)
{
    if(ac < 2)
        throw std::runtime_error("Error: Invalid parameters!");
    for(int i = 1; i < ac; i++)
    {
        std::string arg(av[i]);
        if(arg.empty())
            throw std::runtime_error("Error: empty parameter!");
        for(size_t j = 0; j < arg.size() ; j++)
            if(!std::isdigit(static_cast<unsigned char>(arg[j])))
                throw std::runtime_error("Error: Negative num");
        long nb = std::atol(arg.c_str());
        if(nb <= 0 || nb < INT_MIN || nb > INT_MAX)
            throw std::runtime_error("Error: off limits pram");
        if (std::find(vect.begin(), vect.end(), nb) != vect.end())
            throw std::runtime_error("Error: duplicated parameter");
        vect.push_back(static_cast<int> (nb));
        deq.push_back(static_cast<int> (nb));
    }
}

std::vector<size_t> PmergeMe::jacob_algo(size_t n)
{
    std::vector<size_t> ject;
    ject.push_back(0);
    ject.push_back(1);
    while(ject.back() <= n)
    {
        size_t size = ject.size();
        size_t prev1 = ject[size - 1];
        size_t prev2 = ject[size - 2];

        size_t next = prev1 + prev2 * 2;
        if(next > n)
            break;
        ject.push_back(next);
    }
    return ject;
}

static bool secomp(const std::pair<int, int>& a, const std::pair<int, int>& b) 
{
        return a.second < b.second;
}

std::vector<int> PmergeMe :: vector_sort(std::vector<int> &vectt)
{
    std::vector<int> bigs;
    std::vector<int> smalls;
    std::vector<std::pair<int, int> > pairs;
    int rest;
    for (size_t i = 0; i + 1 < vectt.size(); i += 2)
    {    
            if(vectt[i] < vectt[i + 1])
                pairs.push_back(std::make_pair(vectt[i], vectt[i + 1]));
            else
                pairs.push_back(std::make_pair(vectt[i + 1], vectt[i]));
    }
    std::sort(pairs.begin(), pairs.end(), secomp);
    bool hasRest = false;
    if(vectt.size() % 2 != 0)
    {
        rest = vectt.back();
        hasRest = true;
    }
    for (size_t j = 0; j < pairs.size(); ++j)
    {
        bigs.push_back(pairs[j].second);
        smalls.push_back(pairs[j].first);
    }
    std::vector<size_t> order = jacob_algo(smalls.size());
    std::vector<bool> inserted(smalls.size(), false);
    for(size_t k = 0; k < order.size(); ++k)
    {
        size_t pos = order[k];
        if(pos < smalls.size() && !inserted[pos])
        {
            Inserting(bigs, smalls[pos], bigs.size() - 1);
            inserted[pos] = true;
        }
    }
}

void PmergeMe :: run (int ac, char **av)
{
    parsing(ac, av);
    std::cout << "Before: ";
    for (size_t i = 0; i < vect.size(); i++)
        std::cout << vect[i] << " ";
    std::cout << std::endl;
    std::clock_t startime = std::clock();
    std::vector<int> sortedVec = vector_sort(vect);
}