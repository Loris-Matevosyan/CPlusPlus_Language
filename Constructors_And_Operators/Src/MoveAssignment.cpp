#include "AssignmentOperators.h"


void printMoveAssign(const MoveAssignClass& moveAssignClassOne, 
                     const MoveAssignClass& moveAssignClassTwo, std::string_view actionTime) 
{
    std::cout << "\n---moveAssignClassOne " << actionTime << " move assigning---" << std::endl;
    moveAssignClassOne.print();
    std::cout << "---moveAssignClassTwo " << actionTime << " move assigning---" << std::endl;
    moveAssignClassTwo.print();
} 


void MoveAssignmentOperationExample() 
{

    MoveAssignClass moveAssignClassOne{5, "Jack", "Smith"};
    MoveAssignClass moveAssignClassTwo{10, "Janny", "Brown"};
    printMoveAssign(moveAssignClassOne, moveAssignClassTwo, "before");
    moveAssignClassTwo = std::move(moveAssignClassOne);
    printMoveAssign(moveAssignClassOne, moveAssignClassTwo, "after");

}