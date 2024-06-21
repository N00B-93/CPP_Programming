#pragma once
#include <string>
#include <vector>

// A struct representing an Employee.
struct Employee
{
	std::string employeeName;
	float basicSalary;
	float totalSalary;
	int age;
};

/**
 * Sorts Employees based on their total salary in reversed order using selection sort.
 *
 * @param employees A vector containing the Employees to be sorted in descending order based on total salary.
 */
void sortEmployeeByTotalSalary(std::vector<Employee>& employees);

/**
 * Displays a vector of Employees.
 *
 * @param employees The vector of Employees to be displayed.
 */
void displayEmployees(std::vector<Employee>& employees);

/**
 * Calculates the total salary for an Employee based on their basic salary.
 *
 * This function calculates the Dearness Allowance (DA) and House Rent Allowance (HRA)
 * based on defined percentages and adds them to the basic salary to determine the total salary.
 * The calculated total salary is stored in the `totalSalary` member of the `employee` argument.
 *
 * @param employee A reference to an Employee object for whom the total salary will be calculated.
 */
void calculateTotalSalary(Employee& employee);

