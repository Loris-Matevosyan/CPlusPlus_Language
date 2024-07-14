#ifndef _NONMEMBERSPACESHIP_
#define _NONMEMBERSPACESHIP_

#include <compare>


class MyNumber
{
    int m_number{};

public:
    explicit MyNumber(int number)
        : m_number(number)
    {
        //Empty
    }

    int get_number() const
    {
        return m_number;
    }

};


inline auto operator<=>(const MyNumber& left, const MyNumber& right)
{
    return left.get_number() <=> right.get_number();
}

inline auto operator<=>(int left, const MyNumber& right)
{
    return left <=> right.get_number();
}


inline auto operator==(const MyNumber& left, const MyNumber& right)
{
    return left.get_number() == right.get_number();
}

inline auto operator==(int left, const MyNumber& right)
{
    return left == right.get_number();
}


void NonMemberSpaceshipExample ();



#endif //_NONMEMBERSPACESHIP_