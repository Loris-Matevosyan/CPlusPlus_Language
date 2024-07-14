#include "MembersWithoutSpaceship.h"
#include <iostream>


void MembersWithoutSpaceshipExample()
{

    Collection collectionOne{1,2,3,4};
    Collection collectionTwo{5,6,7,8};

    std::cout << std::boolalpha;
    std::cout << "collectionOne(1,2,3,4) > collectionTwo(5,6,7,8) : " << (collectionOne > collectionTwo) << std::endl;
    std::cout << "collectionOne(1,2,3,4) >= collectionTwo(5,6,7,8) : " << (collectionOne >= collectionTwo) << std::endl;
    std::cout << "collectionOne(1,2,3,4) < collectionTwo(5,6,7,8) : " << (collectionOne < collectionTwo) << std::endl;
    std::cout << "collectionOne(1,2,3,4) <= collectionTwo(5,6,7,8) : " << (collectionOne <= collectionTwo) << std::endl;
    std::cout << "collectionOne(1,2,3,4) == collectionTwo(5,6,7,8) : " << (collectionOne == collectionTwo) << std::endl;
    std::cout << "collectionOne(1,2,3,4) != collectionTwo(5,6,7,8) : " << (collectionOne != collectionTwo) << std::endl;

}