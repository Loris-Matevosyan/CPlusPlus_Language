#include "TwoDimention.h"
#include <iostream>


void print2dArray(int twoDimentionArray[], int rowSize, int columnSize) {
    int element{0};
    for(int i = 0; i < rowSize; ++i) {
        for(int j = 0; j < columnSize; ++j) {
            element = twoDimentionArray[i * columnSize + j];
            std::cout << element << " ";
            if (element < 10)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}


void twoDimentionFlatArrayExample() {

    constexpr int rowSize = 5;
    constexpr int columnSize = 5;
    int twoDimentionArray[rowSize * columnSize];

    int incrementOne{1};
    for(int i = 0; i < rowSize; ++i) {
        for(int j = 0; j < columnSize; ++j) {
            twoDimentionArray[i * columnSize + j] = incrementOne; // i is current row, columnSize is all elements in row, j is current column
            ++incrementOne;
        }
    }

    print2dArray(twoDimentionArray, rowSize, columnSize);

} 
