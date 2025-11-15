/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:18:04 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/15 22:19:25 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>

class BitcoinExchange {
private:
    std::map<std::string, double> data;

public:
    BitcoinExchange(){}
    BitcoinExchange(const BitcoinExchange& obj){
        data = obj.data;
    }
    BitcoinExchange& operator=(const BitcoinExchange& obj){
        if (this != &obj) {
            data = obj.data;
        }
        return *this;
    }
    ~BitcoinExchange(){}

    void excute(const std::string& filename);
    void fillmap(std::ifstream& datafile);
    bool validDate(const std::string& date);
    bool validValue(double value);
    bool validValue(const std::string& value);
};

#endif