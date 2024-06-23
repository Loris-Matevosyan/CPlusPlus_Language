#ifndef _AWAITABLES_
#define _AWAITABLES_

#include <iostream>
#include <coroutine>
#include "CustomCoroutine.h"


// C++ library suspend_never and suspend_always implementations

/*
struct suspend_never
{
    constexpr bool await_ready() const noexcept
    {
        return true;                              // TRUE
    }
    constexpr void await_suspend (std::coroutine_handle<>) const noexcept 
    {
        //Empty
    }
    constexpr void await_resume() const noexcept
    {
        //Empty
    }

};


struct suspend_always
{
    constexpr bool await_ready() const noexcept
    {
        return false;                              // FALSE
    }
    constexpr void await_suspend (std::coroutine_handle<>) const noexcept 
    {
        //Empty
    }
    constexpr void await_resume() const noexcept
    {
        //Empty
    }

};
*/


// Custom Awaitable

struct myAwaitable
{
    auto operator co_await()
    { 
        print();
        return std::suspend_always{};
    }

    void print()
    {
        std::cout << "My Awaitable is called" << std::endl;
    }
};


CoroType printAwaitable();

void customAwaitableExample();


#endif //_AWAITABLES_