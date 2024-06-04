#ifndef _RECURSIVETEMPLATES_
#define _RECURSIVETEMPLATES_

#include <iostream>
#include <iomanip>
#include <concepts>


// This is an example to compare with Variadic Templates
// This example is using C++ 20 feature Concepts


template <typename T>
concept Printable = requires(T print) 
{
    { std::cout << print } -> std::same_as<std::ostream&>;
};



void indent() 
{
    std::cout << "\n" << std::setw(20) << ""; 
}


template <Printable V>
void recursiveFunction(V v) 
{
    std::cout << v;
    indent();
    std::cout << "---0 argument left---" << std::endl;
}


template <Printable U, Printable V>
void recursiveFunction(U u, V v) 
{
    std::cout << u << " " << v;
    indent();
    std::cout << "---1 argument left---" << std::endl;

    recursiveFunction(v);
}


template <Printable T, Printable U, Printable V>
void recursiveFunction(T t, U u, V v) 
{
    std::cout << t << " " << u << " " << v;
    indent();
    std::cout << "---2 arguments left---" << std::endl;

    recursiveFunction(u, v);
}



#endif //_RECURSIVETEMPLATES_