#include <iostream>
#include <vector>
#include "Employee.hpp"

/**
    This is a program that creates three Employee Objects, adds them to a vector and then
    displays  the properties of each Employee Object.
*/

void displayDetails(std::vector<Employee> employees);  // Prototype of the getDetails function.

int main(int argc, char const *argv[])
{

    // Creates three Employee Objects.
    Employee employee1 = Employee("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2 = Employee("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3 = Employee("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // creates a Vector of Employees and adds the Employees created to the vector.
    std::vector<Employee> employees {employee1, employee2, employee3};

    // Displays the details of each Employee.
    std::cout << "\n\t\tEmployee Details.";
    displayDetails(employees);

    return (0);
}

/**
 * Displays the details of Employees in a vector.
 * 
 * @param employees A vector containing the Employee Objects whose details are to be displayed.
*/
void displayDetails(std::vector<Employee> employees)
{
    for (Employee employee: employees)
    {
        std::cout << "\nEmployee Name: " << employee.name;
        std::cout << "\nEmployee ID: " << employee.employeeID;
        std::cout << "\nDepartment: " << employee.department;
        std::cout << "\nPosition: " << employee.position;
        std::cout << "\n";
    }
}
