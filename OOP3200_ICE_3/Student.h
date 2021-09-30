/**
 * Project OOP3200-F2020-Lesson4
 * @author Tom Tsiliopoulos
 * @version 1.0
 */

#pragma once

#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"


class Student: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
Student(std::string first_name, std::string last_name, float age, std::string student_id);

std::string getStudentID() const; // returns student id
    
/**
 * @param value
 */
void setStudentID(const std::string& value); // sets student id
    
void Studies() const; // outputs that the student is studying

std::string ToString() override; // returns string output of the student 
private:
std::string m_studentID; // student id exclusive to student
};

#endif //_STUDENT_H