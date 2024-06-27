#include "RangeFactories.h"
#include <iostream>
#include <ranges>



void RangeFactoriesExample()
{

    auto infiniteView = std::views::iota(1);
    // for (auto number : infiniteView) {
    //     std::cout << number << " ";             //Infinite loop
    // }                    


    // for(auto number: std::views::iota(1)){
    //     std::cout << number << " ";             //Infinite loop
    // }


    for(auto number: std::views::iota(1, 21)){
        std::cout << number << " ";
    }
    std::cout << std::endl;


    for(auto number: std::views::take(std::views::iota(1), 20)){
        std::cout << number << " ";
    }
    std::cout << std::endl;


    for(auto number: std::views::iota(1) | std::views::take(20)){
        std::cout << number << " ";
    }
    std::cout << std::endl;


    auto finiteView = std::views::iota(1) | std::views::take(20);
    for(auto number: finiteView){
        std::cout << number << " ";
    }
    std::cout << std::endl;

}
