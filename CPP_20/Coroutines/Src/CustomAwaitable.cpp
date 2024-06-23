#include "Awaitables.h"


CoroType printAwaitable()
{
    std::cout << "1st output" << std::endl;
    co_await myAwaitable{};
    std::cout << "2nd output" << std::endl;
    co_await myAwaitable{};
    std::cout << "3rd output" << std::endl;
    co_await myAwaitable{};
    std::cout << "Coroutine function ended" << std::endl;
}


void customAwaitableExample()
{

    auto myTaskSeven = printAwaitable();

    std::cout << std::boolalpha;
    myTaskSeven.m_handle();
    std::cout << "Is coroutine done: " << myTaskSeven.m_handle.done() << std::endl;
    
    myTaskSeven.m_handle();
    std::cout << "Is coroutine done: " << myTaskSeven.m_handle.done() << std::endl;

    myTaskSeven.m_handle.resume();
    std::cout << "Is coroutine done: " << myTaskSeven.m_handle.done() << std::endl;

    myTaskSeven.m_handle.resume();
    std::cout << "Is coroutine done: " << myTaskSeven.m_handle.done() << std::endl;

}