#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <list>
#include <iostream>

template<typename T>

typename T::iterator easyfind(T &container, int num)
{
    typename T::iterator  iter;
    typename T::iterator  iter_end;
    typename T::iterator  found;

    iter = container.begin();
    iter_end = container.end();
    found = std::find(iter, iter_end, num);
    if(found == iter_end)
    {
        throw std::exception();
    }else
    {
        return (found);
    }
}

#endif