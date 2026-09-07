#include "Span.hpp"

int main()
{
    std::srand(time(NULL));

    testWithNoItems();
    testWithOneItem();
    testSubject();
    testCustom(10);
    testCustom(100);
    testCustom(1000);
    testCustom(10000);
    testRandom(10);
    testElementsBiggerThanSize(10);
    TestAddManyWithinRange(10);
    TestAddManyOutOfRange(10);
    testAddManyEmpty();

    return 0;
}