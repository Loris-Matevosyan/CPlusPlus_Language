#ifndef _CUSTOMCONCEPT_
#define _CUSTOMCONCEPT_


#include <concepts>
#include <type_traits>



// Custom concepts

template <typename T>
concept MyIntegral = std::is_integral_v<T>;


template <typename T>
concept Multipliable = requires(T a, T b) 
{
    a * b;
};


template <typename T>
concept Incrementable = requires(T t) {
    ++t;
    t++;
};


// Template functions

template <MyIntegral T>
T sumOfIntegrals(T a, T b) 
{
    return a + b;
}


template <typename T>
requires Multipliable<T>
T multiplyMultipliables(T a, T b) 
{
    return a * b;
}


template <typename T>
T incrementIncrementable(T t) requires Incrementable<T>
{
    return ++t;
}



void customConceptsExample();


#endif //_CUSTOMCONCEPT_