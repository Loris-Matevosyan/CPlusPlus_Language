#ifndef _SIMPLIFIEDOPERATORS_
#define _SIMPLIFIEDOPERATORS_

#include <compare>


class SimplifiedOperators
{
    int m_number{};

public:
    explicit SimplifiedOperators(int number)
        : m_number(number)
    {
        //Empty
    }
  
    // Instead of 18 non-member functions, in C++20 sufficient 4 member functions
    auto operator<=>(const SimplifiedOperators& right) const = default;
    auto operator<=>(int number) const
    {
        return m_number <=> number;
    }

    bool operator==(const SimplifiedOperators& right) const
    {
        return m_number == right.m_number;
    }

    bool operator==(int number) const
    {
        return m_number == number;
    }

};


void simplifiedOperatorsExample();



#endif //_SIMPLIFIEDOPERATORS_