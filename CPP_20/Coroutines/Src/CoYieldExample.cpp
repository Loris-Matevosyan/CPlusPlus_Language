#include "CustomCoroutine.h"


CoroType returnNumbers()
{
    std::cout << "First line" << std::endl;
    co_yield 1;
    std::cout << "Second line" << std::endl;
    co_yield 2;
    std::cout << "Third line" << std::endl;
    co_yield 3;
    std::cout << "Coroutine function ended" << std::endl;
}


void coYieldExample()
{

    auto myTaskTwo = returnNumbers();

    std::cout << std::boolalpha;
    myTaskTwo.m_handle();
    std::cout << "Value: " << myTaskTwo.m_handle.promise().m_value << std::endl;
    std::cout << "Is coroutine done: " << myTaskTwo.m_handle.done() << std::endl;
    
    myTaskTwo.m_handle.resume();
    std::cout << "Value: " << myTaskTwo.m_handle.promise().m_value << std::endl;
    std::cout << "Is coroutine done: " << myTaskTwo.m_handle.done() << std::endl;

    myTaskTwo.m_handle.resume();
    std::cout << "Value: " << myTaskTwo.m_handle.promise().m_value << std::endl;
    std::cout << "Is coroutine done: " << myTaskTwo.m_handle.done() << std::endl;

    myTaskTwo.m_handle.resume();
    std::cout << "Is coroutine done: " << myTaskTwo.m_handle.done() << std::endl;


}