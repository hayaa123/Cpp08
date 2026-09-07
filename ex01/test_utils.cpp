#include "Span.hpp"

void testLongestSpan(Span &span)
{
    try
    {
        span.longestSpan();
        std::cout << "longest Span is: " << span.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        std::cerr << "Does not have Longest Span" << '\n';
    }
}

void testShortestSpan(Span &span)
{
    try
    {
        span.shortestSpan();
        std::cout << "Shortest Span is: " << span.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        std::cerr << "Does not have Shortest Span" << '\n';
    }
}

void testAddNumber(Span &span, int num)
{
    try
    {
        span.addNumber(num);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        std::cerr << "Faield to add num" << std::endl;
        std::cerr << "size =" << span.getSize()
                  << ", Max Size: " << span.getMaxSize() << std::endl;
    }
}