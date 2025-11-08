/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouar <alaaouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 01:04:30 by alaaouar          #+#    #+#             */
/*   Updated: 2025/11/08 01:14:47 by alaaouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack
{
public:
        MutantStack(){}
        MutantStack(const MutantStack& other)
        {
            if(this != &other)
                *this = other;
        }
        MutantStack& operator=(const MutantStack& other)
        {
            if(this != &other)
                *this = other;
            return *this;
        }
        ~MutantStack(){}

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator                begin()         { return this->c.begin();   }
        iterator                end()           { return this->c.end();     }
        const_iterator          begin()    const{ return this->c.begin();   }
        const_iterator          end()      const{ return this->c.end();     }
        reverse_iterator        rbegin()        { return this->c.rbegin();  }
        reverse_iterator        rend()          { return this->c.rend();    }
        const_reverse_iterator  rbegin()   const{ return this->c.rbegin();  }
        const_reverse_iterator  rend()     const{ return this->c.rend();    }
};
