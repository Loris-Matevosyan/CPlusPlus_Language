#ifndef _CUSTOMGENERATOR_
#define _CUSTOMGENERATOR_


#include <iostream>
#include <coroutine>
#include <exception>
#include <cassert>


template <typename T>
struct generator
{
    struct promise_type
    {
        T m_value;

        generator get_return_object() 
        {
            return generator(this);
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

        std::suspend_always yield_value(T val)
        {
            m_value = val;
            return {};
        }

        void return_void() 
        {
            std::cout << "Returning void" << std::endl;
        };

    };

    generator(promise_type* p)
        : m_handle(std::coroutine_handle<promise_type>::from_promise(*p)) 
        {
            // Empty
        }

    ~generator() 
    {
        std::cout << "Handler is destroyed" << std::endl;
        m_handle.destroy();
    }

    T operator()() 
    {
        assert(m_handle != nullptr);
        m_handle.resume();
        return (m_handle.promise().m_value);
    }

    std::coroutine_handle<promise_type> m_handle;
};


generator<int> generateNumbers();
generator<int> infiniteNumbers();

void customGeneratorExample();


#endif //_CUSTOMGENERATOR_