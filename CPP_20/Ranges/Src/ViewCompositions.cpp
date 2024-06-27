#include "ViewCompositions.h"
#include <iostream>
#include <algorithm>
#include <ranges>
#include <utility>
#include <vector>
#include <string>



void printFour(auto& data)
{
    for(const auto& element: data)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}


void ViewCompositionsExample()
{

    std::vector<int> numbers{1,2,3,4,5,6,7,8,9};
    std::cout << "Numbers are : ";
    printFour(numbers);


    auto evenNumbers = [](int number){
        return (number % 2) == 0;
    };

    //Raw views composition
    auto squaredEvenNumbersViewOne = std::views::transform( std::views::filter( numbers, evenNumbers ), 
        [] (int number) { return number *= number; });
    std::cout << "Squared even number : ";
    printFour(squaredEvenNumbersViewOne);


    //Pipe operator
    auto squaredEvenNumbersViewTwo = numbers | std::views::filter( evenNumbers )
                                             | std::views::transform( [] (int number) {
                                                    return number *= number;
                                               });
    std::cout << "Squared even number : ";
    printFour(squaredEvenNumbersViewTwo);


    using Person = std::pair<std::string, int>;
    std::vector<Person> persons{{"Sam", 23}, {"Lily", 25}, {"Emily", 27}, {"James", 29}};

    auto namesView = persons | std::views::keys;
    std::ostream_iterator<std::string> ostream(std::cout, " ");
    std::cout << "Persons names are : ";
    std::ranges::copy(namesView, ostream);
    std::cout << std::endl;


    std::cout << "Persons ages in reversed order are : ";
    std::ranges::copy(std::views::values(persons) | std::views::reverse,
                      std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

}