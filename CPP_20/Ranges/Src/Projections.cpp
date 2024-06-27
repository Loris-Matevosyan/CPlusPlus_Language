#include "Projections.h"
#include <algorithm>
#include <functional>



void printTwo(const std::vector<Student>& data)
{
    for(const auto& element: data)
    {
        std::cout << element << "";
    }
    std::cout << std::endl;
}


void ProjectionsExample()
{

    std::vector<Student> students{ {17, "Sam", "Portland"}, {19, "Kate", "New York"}, 
                                   {21, "John", "Chicago"}, {18, "Jack", "Los Angeles"}};
    std::cout << "Students are : " << std::endl;
    printTwo(students);


    std::ranges::sort(students, std::less<Student>{});
    std::cout << "Students after default sorting by age: " << std::endl;
    printTwo(students);


    std::ranges::sort(students, std::less<>{}, [](const Student& student) {
        return student.m_name;
    });
    std::cout << "Students after sorting by name: " << std::endl;
    printTwo(students);


    std::ranges::sort(students, std::less<>{}, &Student::m_city);
    std::cout << "Students after sorting by city: " << std::endl;
    printTwo(students);

}