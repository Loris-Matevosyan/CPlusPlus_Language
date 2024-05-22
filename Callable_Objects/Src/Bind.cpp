#include "CallableObject.h"
#include <iostream>
#include <string>
#include <functional>

using namespace std::placeholders;


void functionToBind(std::string callableType, const std::string& argument) {
    std::cout << callableType << argument << std::endl;
}


void bindExample() {

    std::string callableType{"This is std::bind() "};
    std::string argument("function");

    auto bindFunction = std::bind(functionToBind, callableType, _1);
    bindFunction(argument);

}
