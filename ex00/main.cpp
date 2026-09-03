#include "easyfind.hpp"

void printnum(int num)
{
    std::cout << num << " ";
}

int main()
{
        
    std::list<int> lst;
    std::list<int>::iterator iter; 
    try
    {
        lst.push_back(1);
        lst.push_back(2);
        lst.push_back(4);
        iter = easyfind<std::list<int> >(lst, 2);
        std::for_each(iter, lst.end(), printnum);
        std::cout << std::endl;
         easyfind<std::list<int> >(lst, 6);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}