#include "Span.hpp"

int main()
{
    std::srand(time(NULL));

    testWithNoItems();
    testWithOneItem();
    testSubject();
    testCustom(10);
    testRandom(10);
    testElementsBiggerThanSize(10);
    TestAddManyWithinRange(10);
    TestAddManyOutOfRange(10);
    testAddManyEmpty();

    return 0;
}