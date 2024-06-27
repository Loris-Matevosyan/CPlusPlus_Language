#include "Ranges.h"
#include <iostream>
#include <string_view>

void printTitle (std::string_view title)
{
    std::cout << "\n\n=============" << title << "=============\n\n" << std::endl;
}


int main() 
{

    printTitle("Range Algorithms");
    RangeAlgorithmsExample();

    printTitle("Projections");
    ProjectionsExample();
    
    printTitle("Views and Range Adaptors");
    ViewsAndRangeAdaptorsExample();
    
    printTitle("View Compositions");
    ViewCompositionsExample();
    
    printTitle("Range Factories");
    RangeFactoriesExample();


    return 0;
}