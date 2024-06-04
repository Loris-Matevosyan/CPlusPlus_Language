#ifndef _VARIADICTEMPLATE_
#define _VARIADICTEMPLATE_

#include <iostream>


struct StructArgument
{
    StructArgument() = default;
};


class ClassArgument
{
public:
    ClassArgument() = default;
};


enum class EnumArgument
{   
    DefaultColor
};



template <typename... Args>
void variadicTemplateExample(Args... args) 
{
    if (sizeof...(args) > 1)
        std::cout << "Received " << sizeof...(args) << " arguments" << std::endl;
    else
        std::cout << "Received 1 argument" << std::endl;
}




#endif //_VARIADICTEMPLATE_