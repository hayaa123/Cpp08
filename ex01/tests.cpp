#include "Span.hpp"

void testWithNoItems()
{
    Span span(10);

    std::cout <<"--------------------------------" << std::endl;
    std::cout << "test with no items" << std::endl;
    std::cout <<"--------------------------------" << std::endl;
    testShortestSpan(span);
    testLongestSpan(span);
        std::cout << span << std::endl;
}

void testWithOneItem()
{
    Span span(10);

    std::cout <<"--------------------------------" << std::endl;
    std::cout << "test with one item" << std::endl;
    std::cout <<"--------------------------------" << std::endl;
    testAddNumber(span, 1);
    testShortestSpan(span);
    testLongestSpan(span);
        std::cout << span << std::endl;
}

void testSubject()
{
    Span span;

    span = Span(5);

    std::cout <<"--------------------------------" << std::endl;
    std::cout << "test subject" << std::endl;
    std::cout <<"--------------------------------" << std::endl;
    testAddNumber(span, 6);
    testAddNumber(span, 3);
    testAddNumber(span, 17);
    testAddNumber(span, 9);
    testAddNumber(span, 11);
    testShortestSpan(span);
    testLongestSpan(span);
        std::cout << span << std::endl;
}

void testCustom(int size)
{
    Span span;
    int i;

    span = Span(size);
    i = 0;
    std::cout <<"--------------------------------" << std::endl;
    std::cout << "test custom" << std::endl;
    std::cout <<"--------------------------------" << std::endl;
    testAddNumber(span, 1);
    while ( i < size - 1)
    {
        testAddNumber(span, i*5);
        i++;
    }
    testShortestSpan(span);
    testLongestSpan(span);
        std::cout << span << std::endl;
}

void testRandom(int size)
{
    Span span;
    int i;

    span = Span(size);
    i = 0;
    std::cout <<"--------------------------------" << std::endl;
    std::cout << "test random" << std::endl;
    std::cout <<"--------------------------------" << std::endl;
    while ( i < size)
    {
        testAddNumber(span, rand());
        i++;
    }
    testShortestSpan(span);
    testLongestSpan(span);
        std::cout << span << std::endl;
}

void testElementsBiggerThanSize(int size)
{
    Span span;
    int i;

    span = Span(size);
    i = 0;
    size = size + 1;
    std::cout <<"--------------------------------" << std::endl;
    std::cout << "test elements bigger than size" << std::endl;
    std::cout <<"--------------------------------" << std::endl;
    while ( i < size)
    {
        testAddNumber(span, rand());
        i++;
    }
    testShortestSpan(span);
    testLongestSpan(span);
        std::cout << span << std::endl;
}


void TestAddManyWithinRange(int size)
{
    std::multiset<int> multi;
    std::multiset<int>::iterator start;
    std::multiset<int>::iterator end;
    Span span(size);
    
    std::cout <<"--------------------------------" << std::endl;
    std::cout << "test Add Many Within Range" << std::endl;
    std::cout <<"--------------------------------" << std::endl;
    for(int i = 0; i < size ; i++)
        multi.insert(i);
    start = multi.begin();
    end = multi.end();
    
    testAddMany(span, start, end);
    testShortestSpan(span);
    testLongestSpan(span);
        std::cout << span << std::endl;
}

void TestAddManyOutOfRange(int size)
{
    std::multiset<int> multi;
    std::multiset<int>::iterator start;
    std::multiset<int>::iterator end;
    Span span(size);

    std::cout <<"--------------------------------" << std::endl;
    std::cout << "test Add Many Out of Range" << std::endl;
    std::cout <<"--------------------------------" << std::endl;
    size = size + 1;
    for(int i = 0; i < size + 1 ; i++)
        multi.insert(i);
    start = multi.begin();
    end = multi.end();
    
    testAddMany(span, start, end);
    testShortestSpan(span);
    testLongestSpan(span);
        std::cout << span << std::endl;
}

void testAddManyEmpty()
{
    std::multiset<int> multi;
    std::multiset<int>::iterator start;
    std::multiset<int>::iterator end;
    Span span(10);

    std::cout <<"--------------------------------" << std::endl;
    std::cout << "test Add Many Empty" << std::endl;
    std::cout <<"--------------------------------" << std::endl;
    start = multi.begin();
    end = multi.end();
    
    testAddMany(span, start, end);
    testShortestSpan(span);
    testLongestSpan(span);
        std::cout << span << std::endl;
}