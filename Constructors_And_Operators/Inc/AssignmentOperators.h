#ifndef _ASSIGNMENTOPERATORS_
#define _ASSIGNMENTOPERATORS_

#include <iostream>
#include <string>
#include <string_view>


// For simplicity classes are defined in one header file 
// (not a good practice from a clean code and code maintainability perspective)


class CopyAssignClass
{
private:

    int* m_IDnumber;
    std::string m_firstName{"Sam"};
    std::string m_lastName{"Smith"};

public:

    CopyAssignClass() : m_IDnumber(new int(1)) 
    {
        // Empty
    }

    CopyAssignClass(int IDnumber, std::string firstName, std::string lastName) 
        : m_IDnumber(new int(IDnumber)), m_firstName(firstName), m_lastName(lastName) 
    {
        // Empty
    }

    CopyAssignClass& operator=(const CopyAssignClass& rhs)  // right hand side
    {
        std::cout << "\nCopy assignment operator is called" << std::endl;

        // Same as calling destructor and copy constructor together
        // Could use copy-and-swap idiom

        if(this != &rhs) 
        {
            delete m_IDnumber;
            m_IDnumber = new int;
            *m_IDnumber = *rhs.m_IDnumber;

            m_firstName = rhs.m_firstName;
            m_lastName = rhs.m_lastName;
        }

        return *this;
    }

    void print() const
    {
        std::cout << "ID number: "    << *m_IDnumber
                  << "\nFirst name: " << m_firstName
                  << "\nLast name: "  << m_lastName << std::endl;
    }

    ~CopyAssignClass() 
    {
        delete m_IDnumber;
    }

};


class MoveAssignClass
{
private:

    int* m_IDnumber;
    std::string m_firstName{"Sam"};
    std::string m_lastName{"Smith"};

public:

    MoveAssignClass() : m_IDnumber(new int(1))
    {
        // Empty
    }

    MoveAssignClass(int IDnumber, std::string firstName, std::string lastName) 
        : m_IDnumber(new int(IDnumber)), m_firstName(firstName), m_lastName(lastName) 
    {
        // Empty
    }

    MoveAssignClass& operator=(MoveAssignClass&& rhs)  // right hand side
    {
        std::cout << "\nMove assignment operator is called" << std::endl;

        // Same as calling destructor and move constructor together
        // Could use move-and-swap idiom
        
        if (this != &rhs) 
        {
            delete m_IDnumber;
            m_IDnumber = rhs.m_IDnumber;
            rhs.m_IDnumber = nullptr;

            m_firstName = rhs.m_firstName;
            rhs.m_firstName = "empty";

            m_lastName = rhs.m_lastName;
            rhs.m_lastName = "empty";
        }

        return *this;
    }

    void print() const
    {
        if (m_IDnumber)
            std::cout << "ID number: " << *m_IDnumber;
        else 
            std::cout << "ID number is not valid";

        std::cout << "\nFirst name: " << m_firstName
                  << "\nLast name: "  << m_lastName << std::endl;
    }

    ~MoveAssignClass() 
    {
        delete m_IDnumber;
    }

};


void CopyAssignmentOperationExample();
void MoveAssignmentOperationExample();


void printCopyAssign(const CopyAssignClass& copyAssignClassOne, 
                     const CopyAssignClass& copyAssignClassTwo, std::string_view actionTime);
void printMoveAssign(const MoveAssignClass& moveAssignClassOne, 
                     const MoveAssignClass& moveAssignClassTwo, std::string_view actionTime); 



#endif //_ASSIGNMENTOPERATORS_