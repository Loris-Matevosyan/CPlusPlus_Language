#include "NonMemberSpaceship.h"
#include <iostream>


void NonMemberSpaceshipExample ()
{

    MyNumber numberOne{10};
    MyNumber numberTwo{20};

    std::cout << std::boolalpha;
    std::cout << "numberOne(10) > numberTwo(20) : " << (numberOne > numberTwo) << std::endl;
    std::cout << "numberOne(10) < numberTwo(20) : " << (numberOne < numberTwo) << std::endl;
    std::cout << "numberOne(10) >= 20 : " << (numberOne >= 20) << std::endl;
    std::cout << "10 <= numberTwo(20) : " << (10 <= numberTwo) << std::endl;
    std::cout << "numberOne(10) == numberTwo(20) : " << (numberOne == numberTwo) << std::endl;
    std::cout << "numberOne(10) != 20 : " << (numberOne != 20) << std::endl;

}