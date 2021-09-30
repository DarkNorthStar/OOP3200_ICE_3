/*
 * Project OOP3200_ICE_3
 * @author Tyler Osborne
 * date: 2021/09/29
 */

#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"


class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor(const std::string& first_name, const std::string& last_name, float age, std::string employee_id); // constructor

std::string getEmployeeID() const; // returns employee id
    
/**
 * @param value
 */
void setEmployeeID(const std::string& value); // sets employee id
    
void Teaches(); // outputs that the professor is teaching

std::string ToString() override; // returns a string of the professor
private:
std::string m_employeeID;
};

#endif //_PROFESSOR_H