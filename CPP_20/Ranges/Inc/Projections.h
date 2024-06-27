#ifndef _PROJECTIONS_
#define _PROJECTIONS_

#include <iostream>
#include <vector>
#include <string>


struct Student
{
    int m_age;
    std::string m_name;
    std::string m_city;

    bool operator<(const Student& other) const
    {
        return m_age < other.m_age;
    }

    friend std::ostream& operator<<(std::ostream& os, const Student& student)
    {
        os << "Student name is [ "  << student.m_name << " ] and age is [ " 
           << student.m_age << " ] from [ " << student.m_city << " ]" << std::endl; 
        return os;
    }
};



void printTwo(const std::vector<int>& data);

void ProjectionsExample();


#endif //_PROJECTIONS_