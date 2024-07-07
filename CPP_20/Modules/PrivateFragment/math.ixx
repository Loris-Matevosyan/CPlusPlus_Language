module;

export module math;

export int add(int a, int b);

export int multiply(int a, int b);

module: private;

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}