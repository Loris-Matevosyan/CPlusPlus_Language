#include "CopyAndMoveConstructors.h"


void ShallowCopyConstructorExample() 
{

    ShallowCopyClass shallowCopyClassOne{20, "Emily", "Smith"};
    std::cout << "\n---shallowCopyClassOne before shallow copying it's data---" << std::endl;
    shallowCopyClassOne.print();
    ShallowCopyClass shallowCopyClassTwo = shallowCopyClassOne;
    std::cout << "---shallowCopyClassOne after shallow copying it's data---" << std::endl;
    shallowCopyClassOne.print();
    std::cout << "---shallowCopyClassTwo after shallow copying data from shallowCopyClassOne---" << std::endl;
    shallowCopyClassTwo.print();

}


/*  Note: Shallow copy is used per default

    If the class has a pointer to the heap as a member, then need to use deep copy
    otherwise 
    1. undefined behavior can occur due to deleting one pointer in one class
    which will cause dangling pointer in another classx
    or 
    2. program could crash due to double deleting,
    because two classes members will point at the same data in the same memory location
    (can't release same memory location twice ("double free" error))
*/