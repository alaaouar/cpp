/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 00:35:48 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/15 19:55:34 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

void BitcoinExchange::excute(const std::string& filename) {
    std ::ifstream infile(filename.c_str());
    if (!infile.is_open())
        throw std::runtime_error("Could not open file: " + filename);
    if (infile.eof())
        throw std::runtime_error("File is empty: " + filename);
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
        if (delim == std::string::npos)// understand this one 
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
    }
}