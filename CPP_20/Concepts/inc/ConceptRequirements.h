#ifndef _CONCEPTREQUIREMENTS_
#define _CONCEPTREQUIREMENTS_


#include <iostream>
#include <concepts>



/* ========== Requirements ========== */


// Simple requirement

template <typename T>
concept MaybeLittleType = requires(T t) 
{
    sizeof(T) <= 4;                     // Only checks syntax
};


// Nested requirement

template <typename T>
concept IsLittleType = requires(T t) 
{
    sizeof(T) <= 4;
    requires sizeof(T) <= 4;            // Checks if the expression is true
};


// Compound requirement

template <typename T>
concept Addable = requires (T a, T b) 
{
    {a + b} noexcept -> std::convertible_to<int>;   
    // Checks if a + b is valid syntax, doesn't throw exception and the result is convertible to int
};


// Type requirement

template <typename T>
concept AddableAndCopyable = requires(T a, T b) 
{
    { a.size() } -> std::same_as<std::size_t>;   // a has member function size(), which return size_t
    { T() } -> std::same_as<T>;              // Default-constructible
    { T(a) } -> std::same_as<T>;             // Copy-constructible 
    {a = b} -> std::same_as<T&>;             // Copy-assignable
    {a + b} -> std::same_as<T>;              // Addition operator
};


/* ========== End of requirements ========== */



/* Template functions */

template <MaybeLittleType T>
void callMaybeLittleType(T object) 
{
    std::cout << "Variable could be any size" << std::endl;
    std::cout << "sizeof(object) = " << sizeof(object) << "\n" << std::endl;
}


template <typename T>
void callIsLittleType(T object) requires IsLittleType<T>
{   
    std::cout << "Variable size must be less or equal to 4 bytes" << std::endl;
    std::cout << "sizeof(object) = " << sizeof(object) << "\n" << std::endl;
}


template <typename T>
requires Addable<T>
void callAddable(T objectOne, T objectTwo)
{
    std::cout << "Variable is addable" << std::endl;
    T sumOfObjects = objectOne + objectTwo;
    std::cout << "Sum of first variable and second variable is " << sumOfObjects << "\n" << std::endl;
}


AddableAndCopyable auto callAddableAndCopyable(AddableAndCopyable auto object)
{
    std::cout << "Object is default-constructible, copy-constructible, copy-assignable, "
              << " has overloaded addition operator and has member function size()\n" << std::endl;
    return object;
}



/* Classes */


class notValidClass
{
public:

    notValidClass() = default;
    notValidClass(const notValidClass& object) = delete;
    notValidClass& operator=(const notValidClass& object) = default;

};


class validClass
{
private:

    size_t number{100};

public:

    validClass() = default;
    validClass(const validClass& object) = default;
    validClass& operator=(const validClass& object) = default;
    validClass operator+(const validClass& object) 
    {
        validClass temp;
        temp.number =  number + object.number;
        return temp;
    }

    size_t size() 
    {
        return number;
    }
    
};



void conceptRequirementsExample();



#endif //_CONCEPTREQUIREMENTS_