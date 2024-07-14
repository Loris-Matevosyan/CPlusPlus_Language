#include "SimplifiedOperators.h"
#include <iostream>


void simplifiedOperatorsExample()
{
    
    SimplifiedOperators SimpleOne(10);
    SimplifiedOperators SimpleTwo(200);

    std::cout << std::boolalpha;
    std::cout << "SimpleOne(10) > SimpleTwo(20) : " << (SimpleOne > SimpleTwo) << std::endl;
    std::cout << "SimpleOne(10) < SimpleTwo(20) : " << (SimpleOne < SimpleTwo) << std::endl;
    std::cout << "SimpleOne(10) >= 20 : " << (SimpleOne >= 20) << std::endl;
    std::cout << "10 <= SimpleTwo(20) : " << (10 <= SimpleTwo) << std::endl;
    std::cout << "SimpleOne(10) == 20 : " << (SimpleOne == 20) << std::endl;
    std::cout << "10 != SimpleTwo(20) : " << (10 != SimpleTwo) << std::endl;

}