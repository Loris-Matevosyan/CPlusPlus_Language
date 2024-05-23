#include <iostream>
#include <string_view>
#include "Dimentions.h"


void indenting(std::string_view dimentionType) {
    std::cout << "\n\n=============" << dimentionType << "=============\n\n" << std::endl;
}


int main() {

    indenting("TWO DIMENTION");
    twoDimentionExample();

    indenting("TWO DIMENTION ARRAY");
    twoDimentionArrayExample();
    
    indenting("TWO DIMENTION FLAT ARRAY");
    twoDimentionFlatArrayExample();

    indenting("TWO DIMENTION POINTER");
    twoDimentionPointerExample();

    indenting("THREE DIMENTION");
    threeDimentionExample();

return 0;
}