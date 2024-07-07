module;

// Start Global Module Fragment

// End  Global Module Fragment

export module mathCalculations;  // Module Declaration

// Start Module Preamble

// End Module Preamble


// Start Module Purview
export namespace math 
{
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }
}

namespace math
{
    export int multiply(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }

}

// End Module Purview
