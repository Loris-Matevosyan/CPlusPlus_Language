#include "SpaceshipOperator.h"
#include <iostream>
#include <string_view>


void printTitle(std::string_view title)
{
    std::cout << "\n\n\n=============" << title << "=============\n\n" << std::endl;
}


int main() 
{

    printTitle("SIMPLE EXAMPLES");
    simpleExample();

    printTitle("DEFAULT SPACESHIP");
    defaultSpaceshipExample();

    printTitle("MEMBER WITHOUT SPACESHIP");
    MembersWithoutSpaceshipExample();
    
    printTitle("CUSTOM SPACESHIP");
    customSpaceshipExample();
    
    printTitle("SIMPLIFIED OPERATORS");
    simplifiedOperatorsExample();
    
    printTitle("NON MEMBER SPACESHIP");
    NonMemberSpaceshipExample();


    return 0;
}