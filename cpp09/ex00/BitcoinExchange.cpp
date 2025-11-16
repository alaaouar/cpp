/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 00:35:48 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/16 01:00:55 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

double BitcoinExchange::get_rate(const std::string& date) {
    std::map<std::string, double>::iterator it = data.lower_bound(date);
    if (it != data.end() && it->first == date) {
        return it->second;
    }
    if (it == data.begin()) {
        return 0.0;
    }
    --it;
    return it->second;
}

void BitcoinExchange::fillmap(std::ifstream& datafile) {
    std::string line;

    while (std::getline(datafile, line)) {
        std::istringstream ss(line);
        std::string date;
        double value;
        if (std::getline(ss, date, ',') && ss >> value) {
            data[date] = value;
        }
    }
}

bool  BitcoinExchange::validValue(double value) {
    if (value < 0) {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    if (value > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

bool    BitcoinExchange::validDate(const std::string& date){
    if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    std::string year_str = date.substr(0, 4);
    std::string month_str = date.substr(5, 2);
    std::string day_str = date.substr(8, 2);
    if (year_str.find_first_not_of("0123456789") != std::string::npos ||
        month_str.find_first_not_of("0123456789") != std::string::npos ||
        day_str.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Error: bad input=>" << date << std::endl;
        return false;
    }
    int year = std::atoi(year_str.c_str());
    int month = std::atoi(month_str.c_str());
    int day = std::atoi(day_str.c_str());
    
    if (year < 2009 || year > 2023) {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    if (month == 2) {
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (day > (isLeap ? 29 : 28)) {
            std::cout << "Error: bad input => " << date << std::endl;
            return false;
        }
    }
    return true;
}

void BitcoinExchange::excute(const std::string& filename) {
    std ::ifstream infile(filename.c_str());
    if (!infile.is_open())
        throw std::runtime_error("Error: could not open file." + filename);
    if (infile.eof())
        throw std::runtime_error("Error: file is empty: " + filename);
    std::ifstream datafile("data.csv");
    if (!datafile.is_open())
        throw std::runtime_error("Could not open data file: data.csv");
    if (datafile.eof())
        throw std::runtime_error("Data file is empty: data.csv");
    fillmap(datafile);
    std :: string line;
    std :: getline(infile, line);
    if (line != "date | value")
        throw std::runtime_error("Invalid header in input file");
    while (std :: getline(infile, line))
    {
        if (line.empty())
            continue;
    
        size_t delim = line.find('|');
        if (delim == std::string::npos)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string date = line.substr(0, delim - 1);
        std::string value_str = line.substr(delim + 2);
        double value;
        std::istringstream iss_value(value_str);
        if (!(iss_value >> value)) {
            std::cout << "Error: invalid value => " << value_str << std::endl;
            continue;
        }
        if (value < 0)
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        
        if (!validDate(date))
            continue;
        if (!validValue(value))
            continue;
        std::istringstream iss(value_str);
        double rate;
        iss >> rate;
        rate *= get_rate(date);

        std::cout << date << " => " << value << " = " << rate << std::endl;
            
    }
}