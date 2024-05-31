#ifndef _COPYANDMOVECONSTRUCTORS_
#define _COPYANDMOVECONSTRUCTORS_

#include <iostream>
#include <string>


// For simplicity classes are defined in one header file 
// (not a good practice from a clean code and code maintainability perspective)


class ShallowCopyClass
{
private:

    int m_IDnumber{1};
    std::string m_firstName{"Sam"};
    std::string m_lastName{"Smith"};

public:

    ShallowCopyClass() = default;

    ShallowCopyClass(int IDnumber, std::string firstName, std::string lastName) 
        : m_IDnumber(IDnumber), m_firstName(firstName), m_lastName(lastName) 
    {
        // Empty
    }

    ShallowCopyClass(const ShallowCopyClass& object) 
    {
        std::cout << "Copy constructor (shallow copy) invoked" << std::endl;
        m_IDnumber = object.m_IDnumber;
        m_firstName = object.m_firstName;
        m_lastName = object.m_lastName;
    }

    void print() 
    {
        std::cout << "ID number: "    << m_IDnumber
                  << "\nFirst name: " << m_firstName
                  << "\nLast name: "  << m_lastName << std::endl;
    }

};


class DeepCopyClass
{
private:

    int* m_IDnumber;
    std::string m_firstName{"Sam"};
    std::string m_lastName{"Smith"};

public:

    DeepCopyClass() : m_IDnumber(new int(1)) 
    {
        // Empty
    }

    DeepCopyClass(int IDnumber, std::string firstName, std::string lastName) 
        : m_IDnumber(new int(IDnumber)), m_firstName(firstName), m_lastName(lastName) 
    {
        // Empty
    }

    DeepCopyClass(const DeepCopyClass& object) 
    {
        std::cout << "Copy constructor (deep copy) invoked" << std::endl;
        m_IDnumber = new int;
        *m_IDnumber = *object.m_IDnumber;
        m_firstName = object.m_firstName;
        m_lastName = object.m_lastName;
    }

    void print() 
    {
        std::cout << "ID number: "    << *m_IDnumber
                  << "\nFirst name: " << m_firstName
                  << "\nLast name: "  << m_lastName << std::endl;
    }

    ~DeepCopyClass() 
    {
        delete m_IDnumber;
    }

};


class MoveClass
{
private:

    int* m_IDnumber;
    std::string m_firstName{"Sam"};
    std::string m_lastName{"Smith"};

public:

    MoveClass() : m_IDnumber(new int(1))
    {
        // Empty
    }

    MoveClass(int IDnumber, std::string firstName, std::string lastName) 
        : m_IDnumber(new int(IDnumber)), m_firstName(firstName), m_lastName(lastName) 
    {
        // Empty
    }

    MoveClass(MoveClass&& object) 
    {
        m_IDnumber = object.m_IDnumber;
        object.m_IDnumber = nullptr;

        m_firstName = object.m_firstName;
        object.m_firstName = "empty";

        m_lastName = object.m_lastName;
        object.m_lastName = "empty";
    }

    void print() 
    {
        if (m_IDnumber)
            std::cout << "ID number: " << *m_IDnumber;
        else 
            std::cout << "ID number is not valid";
        std::cout << "\nFirst name: " << m_firstName
                  << "\nLast name: "  << m_lastName << std::endl;
    }

    ~MoveClass() 
    {
        delete m_IDnumber;
    }

};


void ShallowCopyConstructorExample();
void DeepCopyConstructorExample();
void MoveConstructorExample();



#endif //_COPYANDMOVECONSTRUCTORS_