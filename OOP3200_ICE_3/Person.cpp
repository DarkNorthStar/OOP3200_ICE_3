/*
 * Project OOP3200_ICE_3
 * @author Tyler Osborne
 * date: 2021/09/29
 */


#include "Person.h"

#include <iostream>
#include <ostream>

/**
 * Person implementation
 */

/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person::Person(std::string first_name, std::string last_name, float age) 
	:m_age(age), m_firstName(std::move(first_name)), m_lastName(std::move(last_name)) // Constructor
{

}


/**
 * @return float
 */
float Person::getAge() const // returns age
{
    return m_age;
}

/**
 * @param value
 */
void Person::setAge(const float value) // sets age
{
    m_age = value;
}

/**
 * @return string
 */
std::string Person::getFirstName() const // returns first name
{
    return m_firstName;
}

/**
 * @param value
 */
void Person::setFirstName(const std::string& value) // Sets first name
{
    m_firstName = value;
}

/**
 * @return string
 */
std::string Person::getLastName() const // return last name
{
    return m_lastName;
}

/**
 * @param value
 */
void Person::setLastName(const std::string& value) // set last name
{
    m_lastName = value;
}

/**
 * @return void
 */
void Person::SaysHello() // outputs hello from the person
{
    std::cout << getFirstName() << " says Hello!!!!" << std::endl;
}



/**
 * @return string
 */
std::string Person::ToString() // returns a string of the person
 {
    std::string output_string;
    output_string += "-------------------------------------------\n";
	output_string += "First Name: " + getFirstName() + "\n";
    output_string += "Last Name: " + getLastName() + "\n";
    output_string += "Age: " + std::to_string(getAge()) + "\n";
    output_string += "-------------------------------------------\n";
    return output_string;
 }