#include "CoroutineExamples.h"
#include <string_view>


void printTitle(std::string_view title)
{
    std::cout << "\n\n==============" << title << "==============\n\n" << std::endl;
}


int main() 
{

    printTitle("co_await Examples");
    coAwaitExample();
    
    printTitle("co_yield Examples");
    coYieldExample();
    
    printTitle("co_return Examples");
    coReturnExample();
    
    printTitle("Custom generator Examples");
    customGeneratorExample();
    
    printTitle("Custom Awaitable Examples");
    customAwaitableExample();


    return 0;
}