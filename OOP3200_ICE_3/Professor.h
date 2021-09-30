/**
 * Project OOP3200-F2020-Lesson4
 * @author Tom Tsiliopoulos
 * @version 1.0
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
Professor(const std::string& first_name, const std::string& last_name, float age, std::string employee_id);

std::string getEmployeeID() const;
    
/**
 * @param value
 */
void setEmployeeID(const std::string& value);
    
void Teaches();

std::string ToString() override;
private:
std::string m_employeeID;
};

#endif //_PROFESSOR_H