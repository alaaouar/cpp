/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 00:46:05 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/17 02:48:38 by alaaouar         ###   ########.fr       */
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

void vect_Inserting(std::vector<int>& cont, int value, size_t end)
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

static bool secomp(const std::pair<int, int>& a, const std::pair<int, int>& b) 
{
        return a.second < b.second;
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

void deq_Inserting(std::deque<int>& cont, int value, size_t end)
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
}

std::deque<int> PmergeMe::deque_sort(std::deque<int>& data)
{
    std::deque<int> bigs;
    std::deque<int> smalls;
    std::deque<std::pair<int, int> > pairs;
    int rest; 
    size_t i = 0;
    for (; i < data.size(); i += 2)
    {
        if(i + 1 < data.size())
        {    
            if(data[i] < data[i + 1])
                pairs.push_back(std::make_pair(data[i], data[i + 1]));
            else
                pairs.push_back(std::make_pair(data[i + 1], data[i]));
        }
    }
    std::sort(pairs.begin(), pairs.end(), secomp);
    bool hasRest = false;
    if(data.size() % 2 != 0)
    {
        rest = data.back();
        hasRest = true;
    }
    for (size_t j = 0; j < pairs.size(); j++)
    {
        bigs.push_back(pairs[j].second);
        smalls.push_back(pairs[j].first);
    }
    std::vector<size_t> order = jacob_algo(smalls.size());
    std::vector<bool> inserted(smalls.size(), false);
    for(size_t index = 0; index < order.size(); index++)
    {
        size_t pos = order[index];
        if(pos < smalls.size() && !inserted[pos])
        {
            int val = smalls[pos];
            deq_Inserting(bigs, val, bigs.size() - 1);
            inserted[pos] = true;
        }
    }
    for (size_t k = 0; k < smalls.size(); k++)
    {
        if (!inserted[k])
            deq_Inserting(bigs, smalls[k], bigs.size() - 1);
    }
    if(hasRest)
        deq_Inserting(bigs, rest, bigs.size() - 1);
    return bigs;
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
            vect_Inserting(bigs, smalls[pos], bigs.size() - 1);
            inserted[pos] = true;
        }
    }
    if (hasRest)
        vect_Inserting(bigs, rest, bigs.size() - 1);
    return bigs;
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
    std::clock_t endVec = std::clock();
    double vectorTime = static_cast<double>(endVec - startime) / CLOCKS_PER_SEC * 1e6;
    std::clock_t startDeq = std::clock();
    std::deque<int> sortedDeq = deque_sort(deq);
    std::clock_t endDeq = std::clock();
    double dequeTime = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1e6;
    vect = sortedVec;
    deq = sortedDeq;
    std::cout << "After:  ";
    for (size_t i = 0; i < vect.size(); i++)
        std::cout << vect[i] << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of " << vect.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << vectorTime << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << std::fixed << std::setprecision(5) << dequeTime << " us" << std::endl;
}