/**
 * Project OOP3200-F2020-Lesson4
 * @author Tom Tsiliopoulos
 * @version 1.0
 */


#include "Professor.h"

#include <iostream>
#include <ostream>


/**
 * Professor implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor::Professor(const std::string& first_name, const std::string& last_name, const float age, std::string employee_id)
	: Person(first_name, last_name, age), m_employeeID(std::move(employee_id))
{
}

/**
 * @return string
 */
std::string Professor::getEmployeeID() const // returns employee id
{
    return m_employeeID;
}

/**
 * @param value
 */
void Professor::setEmployeeID(const std::string& value) // sets employee id
{
    m_employeeID = value;
}

/**
 * @return void
 */
void Professor::Teaches() // outputs that the teacher is teaching
{
    std::cout << getFirstName() << " Is Teaching!" << std::endl;
}

/**
 * @return string
 */
std::string Professor::ToString() // returns a string of the professor
{

    std::string output_string;
    output_string += Person::ToString();
    output_string += "-------------------------------------------\n";
    output_string += "Employee ID: " + getEmployeeID() + "\n";
    output_string += "-------------------------------------------\n";

	return output_string;
}