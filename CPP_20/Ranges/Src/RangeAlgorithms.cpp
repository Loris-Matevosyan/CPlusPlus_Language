#include "RangeAlgorithms.h"
#include <iostream>
#include <algorithm>



void printOne(const std::vector<int>& data)
{
    for(const auto& element: data)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}


void RangeAlgorithmsExample()
{

    std::vector<int> numbers{6,2,8,9,5,4,1,3,7};
    std::cout << "Numbers are : ";
    printOne(numbers);


    std::ranges::sort(numbers);
    std::cout << "Numbers after sorting : ";
    printOne(numbers);


    auto evenNumber = [](int number) {
        return (number % 2) == 0;
    };

    auto iter = std::ranges::find_if(numbers, evenNumber);

    if (iter != numbers.end())
    {
        std::cout << "Found number " << *iter << std::endl;
    }
    

    bool isAllEven = std::ranges::all_of(numbers.begin(), numbers.end(), evenNumber);

    if (isAllEven)
    {
        std::cout << "All numbers are even" << std::endl;
    }
    else
    {
        std::cout << "Not all numbers are even" << std::endl;
    }


    std::ranges::for_each(numbers, [](int& number) {
        number *= 10;
    });
    std::cout << "After multiplying by 10 : ";
    printOne(numbers);

}