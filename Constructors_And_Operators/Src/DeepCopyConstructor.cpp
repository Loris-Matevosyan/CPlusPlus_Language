#include "CopyAndMoveConstructors.h"


void DeepCopyConstructorExample() 
{

    DeepCopyClass deepCopyClassOne{20, "Emily", "Smith"};
    std::cout << "\n---deepCopyClassOne before deep copying it's data---" << std::endl;
    deepCopyClassOne.print();
    DeepCopyClass deepCopyClassTwo = deepCopyClassOne;
    std::cout << "---deepCopyClassOne after deep copying it's data---" << std::endl;
    deepCopyClassOne.print();
    std::cout << "---deepCopyClassTwo after deep copying data from deepCopyClassOne---" << std::endl;
    deepCopyClassTwo.print();

}