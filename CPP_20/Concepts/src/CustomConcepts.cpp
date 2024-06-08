#include "CustomConcepts.h"
#include <iostream>
#include <string_view>
#include <string>



template <typename T>
void printTwo(std::string_view text, T answer) 
{
    std::cout << text << answer << std::endl;
}


void customConceptsExample()
{
    int answerOne = sumOfIntegrals(10, 20);
    printTwo("10 + 20 = ", answerOne);

    // double answerTwo = sumOfIntegrals(5.5, 13.5);           // Error, sumOfIntegrals() function only accepts integral numbers
    // printTwo("5.5 + 13.5 = ", answerTwo);

    int answerThree = multiplyMultipliables(3, 8);
    printTwo("3 * 8 = ", answerThree);
    
    // std::string nine{"9"};
    // std::string five{"5"};
    // std::string answerFour = multiplyMultipliables(nine, five);           // Error, multiplyMultipliables() function only accepts multipliables
    // printTwo("5 * 9 = ", answerFour);

    int answerFive = incrementIncrementable(4);
    printTwo("1 + 4 = ", answerFive);

    // std::string ten{"10"};
    // std::string answerSix = incrementIncrementable(ten);           // Error, incrementIncrementable() function only accepts incrementables
    // printTwo("10 + 1 = ", answerSix);

}