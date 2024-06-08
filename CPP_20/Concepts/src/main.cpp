#include "concepts.h"



void printTitle(std::string_view title)
{
    std::cout << "\n\n============== " << title << " ==============\n\n" << std::endl;
}



int main() 
{

    printTitle("CONCEPT DIFFERENT SYNTAXES");
    conceptSyntaxesExample();

    printTitle("CUSTOM CONCEPTS");
    customConceptsExample();
    
    printTitle("CONCEPT REQUIREMENTS");
    conceptRequirementsExample();


    return 0;
}
