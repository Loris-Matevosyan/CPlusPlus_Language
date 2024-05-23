#include "TwoDimention.h"
#include <iostream>

void print2dPointer(int** twoDimentionPointer, int rowSize, int columnSize) {
    int element{0};
    for(int i = 0; i < rowSize; ++i) {
        for(int j = 0; j < columnSize; ++j) {
            element = twoDimentionPointer[i][j];
            std::cout << element << " ";
            if (element < 10)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void twoDimentionPointerExample() {

    constexpr int rowSize = 5;
    constexpr int columnSize = 5;
    int** twoDimentionPointer = new int*[rowSize];

    int incrementOne{1};
    for(int i = 0; i < rowSize; ++i) {
        twoDimentionPointer[i] = new int[columnSize];
        for(int j = 0; j < columnSize; ++j) {
            twoDimentionPointer[i][j] = incrementOne;
            ++incrementOne;
        }
    }

    print2dPointer(twoDimentionPointer, rowSize, columnSize);
    
    
    for(int i = 0; i < rowSize; ++i) 
        delete [] twoDimentionPointer[i];

    delete [] twoDimentionPointer;

} 
