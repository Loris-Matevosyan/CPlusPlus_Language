#ifndef _CUSTOMCOROUTINE_
#define _CUSTOMCOROUTINE_

#include <iostream>
#include <coroutine>
#include <exception>


struct CoroType
{
    struct promise_type
    {
        // ↓↓↓ Adding for working with co_yield ↓↓↓

        int m_value;

        std::suspend_always yield_value(int val)
        {
            m_value = val;
            return {};
        }

        // ↑↑↑ Adding for working with co_yield ↑↑↑

        CoroType get_return_object() 
        {
            return CoroType(this);
        }

        std::suspend_always initial_suspend()
        {
            return{};
        }

        std::suspend_always final_suspend() noexcept
        {
            return{};
        }

        void unhandled_exception() noexcept
        {
            std::rethrow_exception(std::current_exception());
        }

        // ↓↓↓ Adding for working with co_return ↓↓↓

        void return_value(int val)
        {
            m_value = val;
        }

        // void return_void() {};         // Compiler will give an error if both return functions are defined

        // ↑↑↑ Adding for working with co_return ↑↑↑

    };

    CoroType(promise_type* p)
        : m_handle(std::coroutine_handle<promise_type>::from_promise(*p)) 
        {
            // Empty
        }

    ~CoroType() 
    {
        m_handle.destroy();
    }
    
    std::coroutine_handle<promise_type> m_handle;
};


CoroType returnNumbers();
CoroType printOutput();
CoroType returnIntegers();

void coAwaitExample();
void coYieldExample();
void coReturnExample();


#endif //_CUSTOMCOROUTINE_