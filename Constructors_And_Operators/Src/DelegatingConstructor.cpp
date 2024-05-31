#include "DelegatingConstructor.h"


void delegatingConstructorExample() 
{

    Delegate exampleOne;
    exampleOne.print();
    Delegate exampleTwo(1);
    exampleTwo.print();
    Delegate exampleThree("Jack", "Smith");
    exampleThree.print();
    Delegate exampleFour(2, "George");
    exampleFour.print();
    Delegate exampleFive(3, "Sam", "Jones");
    exampleFive.print();

}