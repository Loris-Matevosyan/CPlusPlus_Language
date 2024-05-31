#include "ConstructorsAndOperators.h"


void printTitle(std::string_view title) {
    std::cout << "\n\n===============" << title << "===============\n" << std::endl;
}


int main() {
    

    printTitle("DELEAGATING CONSTRUCTOR");
    delegatingConstructorExample();
    
    printTitle("-SHALLOW- COPY CONSTRUCTOR");
    ShallowCopyConstructorExample();

    printTitle("-DEEP- COPY CONSTRUCTOR");
    DeepCopyConstructorExample();

    printTitle("MOVE CONSTRUCTOR");
    MoveConstructorExample();
    
    printTitle("COPY ASSIGNMENT");
    CopyAssignmentOperationExample();
    
    printTitle("MOVE ASSIGNMENT");
    MoveAssignmentOperationExample();


return 0;
}