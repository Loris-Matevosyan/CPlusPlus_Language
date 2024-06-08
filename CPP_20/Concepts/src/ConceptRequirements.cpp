#include "ConceptRequirements.h"
#include <string>
#include <cstdint>



void conceptRequirementsExample() 
{
    int32_t numberOne{1};
    callMaybeLittleType(numberOne);

    int64_t numberTwo{2};
    callMaybeLittleType(numberTwo);

    int32_t numberThree{3};
    callIsLittleType(numberThree);

    // int64_t numberFour{4};
    // callIsLittleType(numberFour);   // Error, callIsLittleType() function accept variables if it is less or equal to 4 bytes

    callAddable(10, 20);

    // std::string one{"Hello "};
    // std::string two{"World"};
    // callAddable(one, two);     // Error, callAddable() function accept variables which are addable, 
                                  // doesn't throw an excpetion, and return result which is convertible to int

    std::string hello{"Hello"};
    callAddableAndCopyable(hello);

    validClass valid;
    callAddableAndCopyable(valid);

    // notValidClass notValid;
    // callAddableAndCopyable(notValid);   // Error, callAddableAndCopyable() function accept variable which is
                                        // default-constructible, copy-constructible, copy-assignable, 
                                        // has overloaded addition operator and has member function size()
                                        // which returns size_t

}