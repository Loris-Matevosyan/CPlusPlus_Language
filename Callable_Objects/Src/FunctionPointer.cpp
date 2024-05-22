#include "CallableObject.h"
#include <iostream>
#include <string>


void functionToPoint(const std::string& callableType) {
    std::cout << callableType << std::endl;
}


void functionPointerExample() {

    std::string callableType{"This is Function Pointer"};
    
    void (*funcPtr)(const std::string&) = &functionToPoint; // & is optional
    funcPtr(callableType);

}