#include "ConceptSyntaxes.h"
#include <iostream>
#include <string_view>



template <typename T>
void printOne(std::string_view text, T answer) 
{
    std::cout << text << answer << std::endl;
}


void conceptSyntaxesExample() 
{
    
    int answerOne = add(10, 20);
    printOne("10 + 20 = ", answerOne);

    // double answerTwo = add(10.5, 9.5);           // Error, add() function only accepts integral numbers
    // print("10.5 + 9.5 = ", answerTwo);

    double answerThree = subtract(20.4, 9.9);
    printOne("20.4 - 9.9 = ", answerThree);

    // int answerFour = subtract(17, 7);           // Error, subtract() function only accepts floating point numbers
    // print("17 - 7 = ", answerFour);

    int answerFive = multiply(5, 6);
    printOne("5 * 6 = ", answerFive);

    // double answerSix = multiply(2.4, 6.5);           // Error, multiply() function only accepts integral numbers
    // print("2.4 * 6.5 = ", answerSix); 


    signed int answerSeven = divide(28, 4);
    printOne("28 / 4 = ", answerSeven);

    // double answerEight = divide(5.5, 1.1);           // Error, divide() function only accepts integral numbers
    // print("5.5 / 1.1 = ", answerEight);

}