#include "Employee.hpp"
#include <iostream>

/**
	This is a driver program that tests the functionalities of the Employee struct and related functions.
*/

int main(int argc, char* const argv[])
{
	// Create a vector to store employees
	std::vector<Employee> employees;

	// Add some sample employees
	employees.push_back({"John Doe", 2500.0f, 0.0f, 35});
	employees.push_back({"Jane Smith", 3000.0f, 0.0f, 40});
	employees.push_back({"Mike Brown", 2000.0f, 0.0f, 28});

	// Calculate total salary for each employee (assuming calculateTotalSalary is implemented elsewhere)
	for (Employee& employee : employees)
		calculateTotalSalary(employee);

	// Display the employees before sorting
	std::cout << "\nEmployees before sorting:\n";
	displayEmployees(employees);

	// Sort the employees by total salary in descending order (assuming sortEmployeeByTotalSalary is implemented elsewhere)
	sortEmployeeByTotalSalary(employees);

	// Display the employees after sorting
	std::cout << "\nEmployees after sorting by total salary (descending):\n";
	displayEmployees(employees);

	return (0);
}
