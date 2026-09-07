#include "Span.hpp"
 
    
Span::Span() : _N(100), _size(0)
{

}

Span::Span(unsigned int N) :_N(N), _size(0)
{

}

Span::Span(const Span &other)
{
    _N = other._N;
}

Span::~Span()
{

}

Span &Span::operator=(const Span &other)
{
    if(this == &other)
        return (*this);
    _N = other._N;
    return (*this);
}

int Span::getSize() const 
{
    return (_size);
}

int Span::getMaxSize() const
{
    return (_N);
}

std::multiset<int> Span::getData() const
{
    return (_ms);
}

void Span::addNumber(int num)
{
    if(_size == _N)
        throw std::exception();
    _ms.insert(num);
    _size++;
}

void Span::addMany(int num[], int size)
{
    int i;

    i = 0;
    if(_size + size >= _N)
        throw std::exception();
    while(i < size)
    {
        if(num[i])
            addNumber(num[i]);
        i++;
    }
}

int Span::shortestSpan()
{
    std::multiset<int>::iterator iter1;
    std::multiset<int>::iterator iter2;
    std::multiset<int>::iterator stop;
    int min_diff;

    if(_size < 2)
        throw std::exception();
    iter1 = _ms.begin();
    iter2 = _ms.begin();
    min_diff = INT_MAX;
    stop = _ms.end();
    stop--;
    while(iter1 != stop)
    {
        iter2 = iter1;
        while(iter2 != stop)
        {
            iter2++;
            if((*iter2 - *iter1) < min_diff)
                min_diff = (*iter2 - *iter1);
        }
        iter1++;
    }
    return (min_diff);
}

int Span::longestSpan()
{
    std::multiset<int>::iterator iter1;
    std::multiset<int>::iterator iter2;
    std::multiset<int>::iterator stop;
    int max_diff;

    if(_size < 2)
        throw std::exception();
    iter1 = _ms.begin();
    iter2 = _ms.begin();
    max_diff = 0;
    stop = _ms.end();
    stop--;
    while(iter1 != stop)
    {
        iter2 = iter1;
        while(iter2 != stop)
        {
            iter2++;
            if((*iter2 - *iter1) > max_diff)
                max_diff = (*iter2 - *iter1);
        }
        iter1++;
    }
    return (max_diff);
}

std::ostream &operator <<(std::ostream &os,const Span &span)
{
    int displayed;
    std::multiset<int> data;
    std::multiset<int>::iterator start;
    std::multiset<int>::iterator end;
    
    data = span.getData();
    start = data.begin();
    end = data.end();
    if(span.getSize() < 15)
        displayed = span.getSize();
    else
        displayed = 15;
    os << "Span size: " << span.getSize() << std::endl;
    os << "Span elements:" << std::endl;
    for(int i=0; i < displayed; i++)
    {
        os << *start << " ";
        start++;
    }
    if(span.getSize() > displayed)
        os << "..." << std::endl;
    if(span.getSize() > displayed + 1)
    {
        end--;
        os << *(end) << std::endl;
    }
    return (os);
}
