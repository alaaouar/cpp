/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:52:30 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/31 23:05:21 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
#define BASE_HPP

#include <stdlib.h>
#include <ctime>
#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{
public:
    ~A();
};

class B : public Base
{
public:
    ~B();
};

class C : public Base
{
public:
    ~C();  
};

#endif