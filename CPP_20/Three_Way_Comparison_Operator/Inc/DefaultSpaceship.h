#ifndef _DEFAULTSPACESHIP_
#define _DEFAULTSPACESHIP_

#include <compare>


class DefaultSpaceship
{
    int numberOne{};
    int numberTwo{};

public:
    DefaultSpaceship(int one, int two)
        : numberOne(one), numberTwo(two)
    {
        //Empty
    }
  
    auto operator<=>(const DefaultSpaceship& right) const = default;

};


void defaultSpaceshipExample();



#endif //_DEFAULTSPACESHIP_