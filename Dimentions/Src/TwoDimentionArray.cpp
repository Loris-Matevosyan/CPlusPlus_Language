#include "TwoDimention.h"
#include <iostream>

void print2dArray(int twoDimentionArray[][5], int rowSize) {
    int element{0};
    for(int i = 0; i < rowSize; ++i) {
        for(int j = 0; j < 5; ++j) {
            element = twoDimentionArray[i][j];
            std::cout << element << " ";
            if (element < 10)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void twoDimentionArrayExample() {

    constexpr int rowSize = 5;
    constexpr int columnSize = 5;
    int twoDimentionArray[rowSize][columnSize]{{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

    print2dArray(twoDimentionArray, rowSize);

} 
