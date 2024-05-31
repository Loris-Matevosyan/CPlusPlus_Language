#include "AssignmentOperators.h"


void printCopyAssign(const CopyAssignClass& copyAssignClassOne, 
                     const CopyAssignClass& copyAssignClassTwo, std::string_view actionTime) 
{
    std::cout << "\n---copyAssignClassOne " << actionTime << " copy assigning---" << std::endl;
    copyAssignClassOne.print();
    std::cout << "---copyAssignClassTwo " << actionTime << " copy assigning---" << std::endl;
    copyAssignClassTwo.print();
} 


void CopyAssignmentOperationExample() 
{

    CopyAssignClass copyAssignClassOne{5, "Jack", "Smith"};
    CopyAssignClass copyAssignClassTwo{10, "Janny", "Brown"};
    printCopyAssign(copyAssignClassOne, copyAssignClassTwo, "before");
    copyAssignClassTwo = copyAssignClassOne;
    printCopyAssign(copyAssignClassOne, copyAssignClassTwo, "after");

}