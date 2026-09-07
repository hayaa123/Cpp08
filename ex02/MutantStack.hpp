#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <deque>
#include <iostream>
#include <list>


// c is the underlying container in the stack 
template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;    
        typename Container::iterator begin()
        {
            return (this->c.begin());
        }
        typename Container::iterator end()
        {
            return (this->c.end());
        }
};

// template <class T, class Container = std::deque<T> >
// std::ostream &operator << (std::ostream &os, MutantStack<T, Container> mStack)
// {
//     std::cout 
// }

#endif