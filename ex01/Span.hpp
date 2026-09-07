#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <iostream>
#include <climits>
#include <algorithm>

class Span
{
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        ~Span();
        Span &operator=(const Span &other);
        int getSize() const;
        int getMaxSize() const;
        std::multiset<int> getData() const;
        void addNumber(int num);
        void addMany(int num[], int size);
        template <typename InputIterator>
        void addMany(
            InputIterator start,
            InputIterator end
        ){
            if(_size + std::distance(start, end) - 1 >= _N)
                throw std::exception();
            _ms.insert(start, end);
            _size += std::distance(start, end);
        };
        int shortestSpan();
        int longestSpan();
    private:
        unsigned int _N;
        unsigned int _size;
        std::multiset<int> _ms;        
};

std::ostream &operator <<(std::ostream &os,const Span &span);

// Test Templates
template <typename InputIterator>
void testAddMany(Span &span, InputIterator start, InputIterator end)
{

    try
    {
        span.addMany<InputIterator>(start, end);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cerr << "Add Many Failed" << std::endl;
         std::cerr << "size =" << span.getSize()
                  << ", Max Size: " << span.getMaxSize() << std::endl 
                  <<"Input Size: "<< std::distance(start, end) << std::endl;
    }
    
}

//Test Utils
void testLongestSpan(Span &span);
void testShortestSpan(Span &span);
void testAddNumber(Span &span, int num);

// Test functions
void testWithNoItems();
void testWithOneItem();
void testSubject();
void testCustom(int size);
void testRandom(int size);
void testElementsBiggerThanSize(int size);
void TestAddManyWithinRange(int size);
void TestAddManyOutOfRange(int size);
void testAddManyEmpty();




#endif