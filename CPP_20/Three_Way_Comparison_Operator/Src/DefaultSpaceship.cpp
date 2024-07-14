#include "DefaultSpaceship.h"
#include <iostream>


void defaultSpaceshipExample()
{

    DefaultSpaceship spaceOne{1,2};
    DefaultSpaceship spaceTwo{3,4};

    std::cout << std::boolalpha;
    std::cout << "spaceOne(1,2) > spaceTwo(3,4): " << (spaceOne > spaceTwo) << std::endl;
    std::cout << "spaceOne(1,2) >= spaceTwo(3,4): " << (spaceOne >= spaceTwo) << std::endl;
    std::cout << "spaceOne(1,2) < spaceTwo(3,4): " << (spaceOne < spaceTwo) << std::endl;
    std::cout << "spaceOne(1,2) <= spaceTwo(3,4): " << (spaceOne <= spaceTwo) << std::endl;
    std::cout << "spaceOne(1,2) == spaceTwo(3,4): " << (spaceOne == spaceTwo) << std::endl;
    std::cout << "spaceOne(1,2) != spaceTwo(3,4): " << (spaceOne != spaceTwo) << std::endl;
    
}