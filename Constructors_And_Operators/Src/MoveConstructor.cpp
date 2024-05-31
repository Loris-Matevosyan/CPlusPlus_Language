#include "CopyAndMoveConstructors.h"


void MoveConstructorExample()
{
    
    MoveClass moveClassOne{10, "Jack", "Jones"};
    std::cout << "\n---moveClassOne before moving it's data---" << std::endl;
    moveClassOne.print();
    MoveClass moveClassTwo = std::move(moveClassOne);
    std::cout << "---moveClassOne after moving it's data---" << std::endl;
    moveClassOne.print();
    std::cout << "---moveClassTwo after moving data from moveClassOne---" << std::endl;
    moveClassTwo.print();

}