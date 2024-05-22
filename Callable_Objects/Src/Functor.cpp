#include "CallableObject.h"
#include <iostream>
#include <string_view>


class Functor{
public:
    void operator()(std::string_view callableType) {
        std::cout << callableType << std::endl;
    }
};


void functorExample() {

    std::string_view callableType{"This is Function Object"};
    
    Functor functor;
    functor(callableType);

}
