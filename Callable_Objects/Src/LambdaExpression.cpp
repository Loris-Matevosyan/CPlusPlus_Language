#include "CallableObject.h"
#include <iostream>
#include <string>


void lambdaExpressionExample() {

    std::string callableType{"This is Lambda Expression"};
    
    auto lambdaFunction = [&callableType]() {
        std::cout << callableType << std::endl;
    };

    lambdaFunction();

}