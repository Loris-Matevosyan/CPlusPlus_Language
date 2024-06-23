#include "CustomCoroutine.h"


CoroType returnIntegers()
{
    std::cout << "1st line" << std::endl;
    co_yield 1;
    std::cout << "2nd line" << std::endl;
    co_yield 2;
    std::cout << "3rd line" << std::endl;
    co_yield 3;
    std::cout << "4rd line" << std::endl;
    co_return 4;
    std::cout << "Coroutine function ended" << std::endl;
}


void coReturnExample()
{

    auto myTaskThree = returnIntegers();

    std::cout << std::boolalpha;
    myTaskThree.m_handle();
    std::cout << "Value: " << myTaskThree.m_handle.promise().m_value << std::endl;
    std::cout << "Is coroutine done: " << myTaskThree.m_handle.done() << std::endl;
    
    myTaskThree.m_handle.resume();
    std::cout << "Value: " << myTaskThree.m_handle.promise().m_value << std::endl;
    std::cout << "Is coroutine done: " << myTaskThree.m_handle.done() << std::endl;

    myTaskThree.m_handle.resume();
    std::cout << "Value: " << myTaskThree.m_handle.promise().m_value << std::endl;
    std::cout << "Is coroutine done: " << myTaskThree.m_handle.done() << std::endl;

    myTaskThree.m_handle.resume();
    std::cout << "Value: " << myTaskThree.m_handle.promise().m_value << std::endl;
    std::cout << "Is coroutine done: " << myTaskThree.m_handle.done() << std::endl;


}