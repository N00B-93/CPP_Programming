#include "Employee.hpp"

/**
 * Instantiates a new Employee and sets it's data fields to default values.
 */
Employee::Employee(): employeeName(""), employeeID(0), dateHired(""){};

/**
 * Instantiates a new Employee.
 *
 * @param name The Employee name.
 * @param IDNumber The Employee ID number.
 * @param hiredDate The date the Employee was hired.
 */
Employee::Employee(std::string name, int IDNumber, std::string hiredDate): employeeName(name), employeeID(IDNumber), dateHired(hiredDate){};

/**
 * This returns an Employee name.
 *
 * @return The Employee name.
 */
std::string Employee::getEmployeeName() const
{
	return this->employeeName;
}

/**
 * This returns an Employee ID number.
 *
 * @return An Employee ID number.
 */
int Employee::getEmployeeID() const
{
	return this->employeeID;
}

/**
 * This returns the date an Employee was hired.
 *
 * @return The date an Employee was hired.
 */
std::string Employee::getDateHired() const
{
	return this->dateHired;
}

