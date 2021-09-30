

#include <iostream>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
    // Person Testing
    Person person = Person("Ty", "Oz", 21.0f);
    person.SaysHello();

    std::cout << person.ToString() << std::endl;

    // Student Testing
    Student student = Student("Scott", "guy", 10.0f, "FS100525266");
    student.SaysHello();
    student.Studies();

    std::cout << student.ToString() << std::endl;

    // Professor Testing
    Professor professor = Professor("chris", "Teach", 54.0f, "ID123456789");
    professor.SaysHello();
    professor.Teaches();

    std::cout << professor.ToString() << std::endl;
}

