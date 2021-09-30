

#include <iostream>
#include <vector>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
    // Person Testing
    ///Person person = Person("Ty", "Oz", 21.0f);
    //person.SaysHello();

    //std::cout << person.ToString() << std::endl;

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

    //DYNAMIC MEMORY ALLOCATION!!!

    // Creates vector
    std::vector<Person*> people;

    // Adds person to vector
    people.push_back(new Professor("Lynda", "Stinson", 32.0f, "ID987654321"));

    // Person added to vector says hello!
    people[0]->SaysHello();

    // outputs string prof
    std::cout << people[0]->ToString() << std::endl;

    people.push_back(new Student("Cole", "Train", 20.0f, "S123987456"));
    people[1]->SaysHello();

    std::cout << people[1]->ToString() << std::endl;
    
}

