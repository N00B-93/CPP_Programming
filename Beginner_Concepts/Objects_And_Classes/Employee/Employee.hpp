#include <string>
#pragma once

/**
 * The type Employee
*/
class Employee
{
    public:
        // Attributes of an Employee.
        std::string name, department, position;
        int employeeID;

        Employee(std::string, int, std::string, std::string);  // Parameterized constructor.
        Employee(std::string, int);  // Parameterized constructor.
        Employee();  // Un-parameterized constructor.
};
