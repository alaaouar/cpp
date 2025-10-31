/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:52:33 by alaaouar          #+#    #+#             */
/*   Updated: 2025/10/31 23:26:42 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base (){     }

A::   ~A    (){     }

B::   ~B    (){     }

C::   ~C    (){     }

Base *generate(void)
{
    static bool seeded = false;
    if (!seeded)
    {
        std::srand(static_cast<unsigned int>(std::time(NULL)));
        seeded = true;
    }

    int r = std::rand() % 3;
    if (r == 0)
    {
        std :: cout << "A has been generated" << std :: endl;
        return new A();
    }
    else if (r == 1)
    {
        std :: cout << "B has been generated" << std :: endl;
        return new B();
    }
    
    std :: cout << "C has been generated" << std :: endl;
    return new C();
}

void identify(Base* p)
{
    if (!p)
    {
        std::cout << "Null pointer!" << std::endl;
        return ;
    }
    A *derA = dynamic_cast<A*>(p);
    B *derB = dynamic_cast<B*>(p);
    C *derC = dynamic_cast<C*>(p);
    
    if (derA)
        std :: cout << "A" << std :: endl;
    else if (derB)
        std :: cout << "B" << std :: endl;
    else if (derC)
        std :: cout << "C" << std :: endl;
    else
        std :: cout << "unknown type" << std :: endl;
}

void identify(Base& p)
{
    try    {
       A &derA = dynamic_cast<A&>(p);
       std ::cout << "A" << std::endl;
       (void)derA;
       return; 
    }   catch   (std::exception& e){    }
    try    {
       B &derB = dynamic_cast<B&>(p);
       std ::cout << "B" << std::endl;
       (void)derB;
       return; 
    }   catch   (std::exception& e){    }
    try    {
       C &derC = dynamic_cast<C&>(p);
       std ::cout << "C" << std::endl;
       (void)derC;
       return; 
    }   catch   (std::exception& e){    }

    std::cout << "Unknown type!" << std::endl;
}
int main()
{
    std::cout << "Generating and identifying objects (pointer then reference):" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        Base* obj = generate();
        identify(obj);
        identify(*obj);
        delete obj;
    }

    std::cout << std::endl << "Testing null pointer handling:" << std::endl;
    Base* nullPtr = NULL;
    identify(nullPtr);

    return 0;
}