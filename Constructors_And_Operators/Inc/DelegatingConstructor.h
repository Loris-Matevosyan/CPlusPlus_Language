#ifndef _DELEGATINGCONSTRUCTOR_
#define _DELEGATINGCONSTRUCTOR_

#include <iostream>
#include <string>


// For simplicity class is defined in header file

class Delegate 
{
private:

    int m_IDnumber;
    std::string m_firstName;
    std::string m_lastName;

public:

    Delegate(int IDnumber, std::string firstName, std::string lastName) 
        : m_IDnumber(IDnumber), m_firstName(firstName), m_lastName(lastName) 
    {
        std::cout << "\nConstructor with three arguments invoked" << std::endl;
    }

    Delegate() 
        : Delegate(-1, "first empty", "last empty")
    {
        std::cout << "Constructor has delegated hard coded 'ID number', 'first name' and 'last name'" << std::endl;
    }

    Delegate(int IDnumber) 
        : Delegate(IDnumber, "first empty", "last empty")
    {
        std::cout << "Constructor has delegated hard coded 'first name' and 'last name'" << std::endl;
    }

    Delegate(int IDnumber, std::string firstName) 
        : Delegate(IDnumber, firstName, "last empty") 
    {
        std::cout << "Constructor has delegated hard coded 'last name'" << std::endl;
    }

    Delegate(std::string firstName, std::string lastName) 
        : Delegate(-1, firstName, lastName) 
    {
        std::cout << "Constructor has delegated hard coded 'ID number'" << std::endl;
    }

    void print() 
    {
        std::cout << "ID number: "    << m_IDnumber
                  << "\nFirst name: " << m_firstName
                  << "\nLast name: "  << m_lastName << std::endl;
    }
};


void delegatingConstructorExample();



#endif //_DELEGATINGCONSTRUCTOR_