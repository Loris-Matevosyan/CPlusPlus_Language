#include "ThreeDimention.h"
#include <iostream>
#include <vector>

using ThreeDimentionVector = std::vector<std::vector<std::vector<int>>>;
using TwoDimentionVector = std::vector<std::vector<int>>;


void print3d(ThreeDimentionVector threeDimention) {
    int row{0}, column{0};
    for(int i = 0; i < threeDimention.size(); ++i) {
        std::cout << "Row" << "   Column" << "            Depth" << std::endl;
        for(int j = 0; j < threeDimention[i].size(); ++j) {
            row = i + 1;
            column = j + 1;
            std::cout << " " << row << "      " << column;
            if (column < 10)
                std::cout << " "; 
            std::cout << "   :   ";
            for(int k = 0; k < threeDimention[i][j].size(); ++k) {
                std::cout << threeDimention[i][j][k] << " ";
            }
        std::cout << std::endl;
        }
    std::cout << std::endl;
    }
}


void threeDimentionExample() {
    
    ThreeDimentionVector threeDimention;

    for(int i = 0; i < 10; ++i) {
        threeDimention.emplace_back(TwoDimentionVector());
        for(int j = 0; j < 10; ++j) {
            threeDimention[i].emplace_back(std::vector<int>());
            for(int k = 1; k < 11; ++k) {
                threeDimention[i][j].push_back(k);
            }
        }
    }

    print3d(threeDimention);
}