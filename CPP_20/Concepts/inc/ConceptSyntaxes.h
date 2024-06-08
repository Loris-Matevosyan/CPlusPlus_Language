#ifndef _CONCEPTSYNTAXES_
#define _CONCEPTSYNTAXES_


#include <concepts>
#include <type_traits>



// Syntax 1

template <typename T>
requires std::integral<T>
T add (T a, T b) 
{
    return a + b;
}


// Syntax 2

template <std::floating_point T>
T subtract (T a, T b)
{
    return a - b;
}


// Syntax 3

template <typename T>
T multiply (T a, T b) requires std::is_integral_v<T> 
{
    return a * b;
}


// Syntax 4

std::integral auto divide(std::integral auto a, std::integral auto b) 
{
    return a / b;
}


void conceptSyntaxesExample();



#endif //_CONCEPTSYNTAXES_