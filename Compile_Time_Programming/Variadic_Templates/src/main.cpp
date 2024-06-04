#include "VariadicTemplates.h"
#include <iostream>
#include <string_view>
#include <string>


// Examples: Recursion with variable number of arguments


void printTitle(std::string_view title) 
{
    std::cout << "\n\n==========" << title << "==========\n\n" << std::endl;
}


int main() 
{

    printTitle("VARIADIC TEMPLATES");
    variadicTemplateExample(1);
    variadicTemplateExample(1, 2.01);
    variadicTemplateExample(1, 2.01, std::string{"three"});
    variadicTemplateExample(StructArgument(), ClassArgument(), EnumArgument::DefaultColor);


    printTitle("RECURSION WITH TEMPLATES");
    recursiveFunction(1, 2.01, std::string{"three"});

    
    printTitle("RECURSION WITH VARIADIC TEMPLATE");
    recursiveVariadicFunction(10, 20, 30.5, 40.5, std::string("50"), std::string("60"));


    return 0;
}
