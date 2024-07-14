#ifndef _MEMBERSWITHOUTSPACESHIP_
#define _MEMBERSWITHOUTSPACESHIP_

#include <compare>


class Number
{  
    int m_number{};

public:
    Number(int number) 
        : m_number(number)
    {
        //Empty
    }

    bool operator==(const Number& right) const
    {
        return m_number == right.m_number;
    }

    bool operator<(const Number& right) const 
    {
        return m_number < right.m_number;
    }

};


class Collection{

    int one{1};
    int two{2};
    int three{3};
    Number four{4};

public:
    Collection(int first, int second, int third, int fourth)
        : one(first), two(second), three(third), four(fourth)
    {
        //Empty
    }

    std::strong_ordering operator<=>(const Collection& right) const = default;

};


void MembersWithoutSpaceshipExample();



#endif //_MEMBERSWITHOUTSPACESHIP_