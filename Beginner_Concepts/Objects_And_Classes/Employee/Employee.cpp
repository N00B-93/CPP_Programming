#include "Employee.hpp"

/**
 * Instantiates a new Employee Object with default values.
*/
Employee::Employee()
{
    name = "";
    employeeID = 0;
    department = "";
    position = "";
}

/**
 * Instantiates a new Employee.
 * 
 * @param employeeName The Employee's name.
 * @param ID The Employee's ID number.
 * @param employeeDepartment The Employee's department.
 * @param position The Employee's position.
*/
Employee::Employee(std::string employeeName, int ID, std::string employeeDepartment, std::string employeePosition)
{
    name = employeeName;
    employeeID = ID;
    position = employeePosition;
    department = employeeDepartment;
}

/**
 * Instantiates a new Employee
 * 
 * @param employeeName The name of the Employee.
 * @param ID The Employee's ID number.
*/
Employee::Employee(std::string employeeName, int ID)
{
    name = employeeName;
    employeeID = ID;
    position = "";
    department = "";
}
