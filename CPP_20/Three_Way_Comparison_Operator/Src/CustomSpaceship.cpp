#include "CustomSpaceship.h"
#include <iostream>


void customSpaceshipExample()
{

    CustomSpaceship spaceOne{1.5, 2.5};
    CustomSpaceship spaceTwo{3.5, 4.5};

    std::cout << std::boolalpha;
    std::cout << spaceOne.endPoint() << " > " << spaceTwo.endPoint() << " : " << (spaceOne > spaceTwo) << std::endl;
    std::cout << spaceOne.endPoint() << " >= " << spaceTwo.endPoint() << " : " << (spaceOne >= spaceTwo) << std::endl;
    std::cout << spaceOne.endPoint() << " < " << spaceTwo.endPoint() << " : " << (spaceOne < spaceTwo) << std::endl;
    std::cout << spaceOne.endPoint() << " <= " << spaceTwo.endPoint() << " : " << (spaceOne <= spaceTwo) << std::endl;
    std::cout << spaceOne.endPoint() << " == " << spaceTwo.endPoint() << " : " << (spaceOne == spaceTwo) << std::endl;
    std::cout << spaceOne.endPoint() << " != " << spaceTwo.endPoint() << " : " << (spaceOne != spaceTwo) << std::endl;
    

}