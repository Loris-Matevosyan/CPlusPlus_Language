#ifndef _RECURSIVEVARIADICTEMPLATE_
#define _RECURSIVEVARIADICTEMPLATE_

#include <iostream>
#include <iomanip>
#include <concepts>
#include <string>


// This example is using C++ 20 feature Concepts


template <typename T>
concept Displayable = requires(T print) 
{
    { std::cout << print } -> std::same_as<std::ostream&>;
};



void indentation() 
{
    std::cout << "\n" << std::setw(20) << ""; 
}


template <Displayable T>
void recursiveVariadicFunction(T t) 
{
    std::cout << t;
    indentation();
    std::cout << "---0 argument left---" << std::endl;
}


template <Displayable T, Displayable... Args>
void recursiveVariadicFunction(T t, Args... args) 
{   
    std::cout << t;
    ((std::cout << " " << args), ...);      // Fold expression C++17 feature
    indentation();

    if (sizeof...(args) > 1) 
        std::cout << "---" << sizeof...(args) << " arguments left---" << std::endl;
    else
        std::cout << "---1 argument left---" << std::endl;
        
    recursiveVariadicFunction(args...);
}



#endif //_RECURSIVEVARIADICTEMPLATE_