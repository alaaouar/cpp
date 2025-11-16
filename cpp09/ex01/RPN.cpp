/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 01:08:44 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/16 01:36:30 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& other){
    if (this != &other)
        _stack = other._stack;
}

RPN& RPN::operator=(const RPN& other) {
    if (this != &other) {
        _stack = other._stack;
    }
    return *this;
}

RPN::~RPN() {}

int RPN::evaluate(const std::string& expression) {
    _stack = std::stack<int>();
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (token.length() == 1 && std::isdigit(token[0])) {
            _stack.push(std::atoi(token.c_str()));
        } else if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (_stack.size() < 2) {
                throw std::runtime_error("Error");
            }
            int b = _stack.top(); _stack.pop();
            int a = _stack.top(); _stack.pop();
            int result;

            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else {
                if (b == 0) {
                    throw std::runtime_error("Error");
                }
                result = a / b;
            }
            _stack.push(result);
        } else {
            throw std::runtime_error("Error");
        }
    }

    if (_stack.size() != 1) {
        throw std::runtime_error("Error");
    }

    return _stack.top();
}