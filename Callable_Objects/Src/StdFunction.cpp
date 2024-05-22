#include "CallableObject.h"
#include <iostream>
#include <string>
#include <string_view>
#include <functional>


void funtionFromStd(const std::string& callableType) {
    std::cout << callableType << std::endl;
}


void stdFunctionExample() {

    std::string callableType{"This is std::function"};

    std::function<void(const std::string&)> stdFunction = &funtionFromStd;
    stdFunction(callableType);

}