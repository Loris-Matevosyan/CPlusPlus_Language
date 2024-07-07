module;

// Start Global Module Fragment
#include <iostream>
// End  Global Module Fragment

export module printHello;  // Module Declaration

// Start Module Preamble
import <string>;
// End Module Preamble


// Start Module Purview
export void hello(const std::string& name) 
{
    std::cout << "Hello World from " << name << std::endl;
}
// End Module Purview
