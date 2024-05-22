#include "CallableObject.h"
#include <iostream>
#include <string_view>


class Class{
public:
    void memberFunction(std::string_view callableType) {
        std::cout << callableType << std::endl;
    }
};


void memberFunctionPointerExample() {

    std::string_view callableType{"This is Member Function Pointer"};
    Class obj;
    // Class* objPtr;

    void (Class::*ptrToMember)(std::string_view) = &Class::memberFunction;
    (obj.*ptrToMember)(callableType);
    // (objPtr->*ptrToMember)(callableType);

}