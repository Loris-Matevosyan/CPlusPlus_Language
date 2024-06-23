#include "CustomGenerator.h"


generator<int> generateNumbers()
{
    co_yield 10;
    co_yield 20;
    co_yield 30;
    std::cout << "Coroutine function ended" << std::endl;
}


generator<int> infiniteNumbers()
{
    for (int i = 1;/*empty*/; ++i)
    {
        co_yield i;
        if (i % 25 == 0)
            std::cout << std::endl;
    }
}



void customGeneratorExample()
{

    auto myTaskEight = generateNumbers();

    std::cout << std::boolalpha;
    std::cout << "Value: " << myTaskEight() << std::endl;
    std::cout << "Is coroutine done: " << myTaskEight.m_handle.done() << std::endl;
    std::cout << "Value: " << myTaskEight() << std::endl;
    std::cout << "Is coroutine done: " << myTaskEight.m_handle.done() << std::endl;
    std::cout << "Value: " << myTaskEight() << std::endl;
    myTaskEight();
    std::cout << "Is coroutine done: " << myTaskEight.m_handle.done() << std::endl;

    auto myTaskNine = infiniteNumbers();

    for (int i = 0; i < 100; ++i)
        std::cout << myTaskNine() << " ";
    std::cout << std::endl;

}