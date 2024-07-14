#include "SimpleExample.h"
#include <iostream>


void simpleExample()
{

    int numberOne{10};
    int numberTwo{20};

    std::cout << std::boolalpha;
    std::cout << "10 > 20: " << ((numberOne <=> numberTwo) > 0) << std::endl;
    std::cout << "10 >= 20: " << ((numberOne <=> numberTwo) >= 0) << std::endl;
    std::cout << "10 < 20: " << ((numberOne <=> numberTwo) < 0) << std::endl;
    std::cout << "10 <= 20: " << ((numberOne <=> numberTwo) <= 0) << std::endl;
    std::cout << "10 == 20: " << ((numberOne <=> numberTwo) == 0) << std::endl;
    std::cout << "10 != 20: " << ((numberOne <=> numberTwo) != 0) << std::endl;
    std::cout << std::endl;
    
    
    int numberThree{30};
    int numberFour{30};

    std::cout << "30 > 30: " << ((numberThree <=> numberFour) > 0) << std::endl;
    std::cout << "30 >= 30: " << ((numberThree <=> numberFour) >= 0) << std::endl;
    std::cout << "30 < 30: " << ((numberThree <=> numberFour) < 0) << std::endl;
    std::cout << "30 <= 30: " << ((numberThree <=> numberFour) <= 0) << std::endl;
    std::cout << "30 == 30: " << ((numberThree <=> numberFour) == 0) << std::endl;
    std::cout << "30 != 30: " << ((numberThree <=> numberFour) != 0) << std::endl;

}