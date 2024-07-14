#ifndef _CUSTOMSPACESHIP_
#define _CUSTOMSPACESHIP_

#include <compare>


class CustomSpaceship
{
    double numberOne{};
    double numberTwo{};

public:
    CustomSpaceship(double one, double two)
        : numberOne(one), numberTwo(two)
    {
        //Empty
    }

    double endPoint() const 
    {
        return numberOne * numberTwo;
    }
  
    bool operator==(const CustomSpaceship& right) const
    {
        return (endPoint() == right.endPoint());
    }

    auto operator<=>(const CustomSpaceship& right) const
    {
        if (endPoint() > right.endPoint())
            return std::partial_ordering::greater;
        else if (endPoint() < right.endPoint())
            return std::partial_ordering::less;
        else if (endPoint() == right.endPoint())
            return std::partial_ordering::equivalent;
        else 
            return std::partial_ordering::unordered;
    }

};


void customSpaceshipExample();



#endif //_CUSTOMSPACESHIP_