/*
 * Project OOP3200_ICE_3
 * @author Tyler Osborne
 * date: 2021/09/29
 */


#include "Student.h"

#include <iostream>

/**
 * Student implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
Student::Student(const std::string first_name, const std::string last_name, const float age, std::string student_id)
: Person(first_name, last_name, age), m_studentID(std::move(student_id)) // constructor
{
}

/**
 * @return string
 */
std::string Student::getStudentID() const // returns student id
{
    return m_studentID;
}

/**
 * @param value
 */
void Student::setStudentID(const std::string& value) // sets student id
{
    m_studentID = value;
}

/**
 * @return void
 */
void Student::Studies() const // a student outputs that he is studying
{
    std::cout << getFirstName() << "is studying" <<  std::endl;
}

/**
 * @return string
 */
std::string Student::ToString() // returns a sting of the student
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "-------------------------------------------\n";
    output_string += "Student ID: " + getStudentID() + "\n";
    output_string += "-------------------------------------------\n";

    return output_string;
}