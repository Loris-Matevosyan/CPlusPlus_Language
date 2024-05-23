#include "TwoDimention.h"
#include <iostream>
#include <vector>


using TwoDimentionVector = std::vector<std::vector<int>>;


void print2d(TwoDimentionVector twoDimention) {
    for(auto oneDimention: twoDimention) {
        for(auto element: oneDimention) {
            std::cout << element << " ";
            if (element < 100)
                std::cout << " ";
            if (element < 10)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}


void twoDimentionExample() {

    TwoDimentionVector twoDimention;

    int incrementOne{0};
    for(int i = 0; i < 20; ++i) {
        twoDimention.emplace_back(std::vector<int>());
        for(int j = 0; j < 20; ++j) {
            twoDimention[i].push_back(incrementOne);
            ++incrementOne;
        }
    }

    print2d(twoDimention);

}