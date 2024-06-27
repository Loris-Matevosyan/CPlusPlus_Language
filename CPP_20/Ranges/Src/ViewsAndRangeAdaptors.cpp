#include "ViewsAndRangeAdaptors.h"
#include <iostream>
#include <ranges>
#include <utility>
#include <vector>
#include <string>



void printThree(auto& data)
{
    for(const auto& element: data)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}


void ViewsAndRangeAdaptorsExample() 
{
    
    std::vector<int> numbers{1,2,3,4,5,6,7,8,9};
    std::cout << "Numbers are : ";
    printThree(numbers);

    
    auto evenNumbers = [](int number){
        return (number % 2) == 0;
    };

    std::ranges::filter_view evensView = std::ranges::filter_view(numbers, evenNumbers);
    std::cout << "Even numbers are : ";
    printThree(evensView);


    auto multiplyByTen = [](int number){
        return number * 10;
    };

    // std::ranges::transform_view numbersByTenView = std::ranges::transform_view(numbers, multiplyByTen);
    auto numbersByTenView = std::views::transform(numbers, multiplyByTen);
    std::cout << "Numbers multiplied by ten : ";
    printThree(numbersByTenView);


    auto firstFiveView = std::views::take(numbers, 5);
    std::cout << "First five numbers : ";
    printThree(firstFiveView);


    using Person = std::pair<std::string, int>;
    std::vector<Person> persons{ {"Samuel", 24}, {"John", 32}, {"Jake", 29}, {"Larry", 25}};

    auto keysView = std::views::keys(persons);
    std::cout << "Persons names are : ";
    printThree(keysView);

    
    auto valuesView = std::views::values(persons);
    std::cout << "Persons ages are : ";
    printThree(valuesView);

}