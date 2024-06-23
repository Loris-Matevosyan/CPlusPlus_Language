#include "CustomCoroutine.h"


CoroType printOutput()
{
    std::cout << "First output" << std::endl;
    co_await std::suspend_always{};
    std::cout << "Second output" << std::endl;
    co_await std::suspend_always{};
    std::cout << "Third output" << std::endl;
    co_await std::suspend_always{};
    std::cout << "Coroutine function ended" << std::endl;
}


void coAwaitExample()
{

    auto myTaskOne = printOutput();

    std::cout << std::boolalpha;
    myTaskOne.m_handle();
    std::cout << "Is coroutine done: " << myTaskOne.m_handle.done() << std::endl;
    
    myTaskOne.m_handle();
    std::cout << "Is coroutine done: " << myTaskOne.m_handle.done() << std::endl;

    myTaskOne.m_handle.resume();
    std::cout << "Is coroutine done: " << myTaskOne.m_handle.done() << std::endl;

    myTaskOne.m_handle.resume();
    std::cout << "Is coroutine done: " << myTaskOne.m_handle.done() << std::endl;


}