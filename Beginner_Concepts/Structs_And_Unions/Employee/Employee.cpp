#include "Employee.hpp"
#include <iostream>


void sortEmployeeByTotalSalary(std::vector<Employee>& employees)
{
	for (int i = 0; i < employees.size(); ++i)
	{
		double maxTotalSalary = employees[i].totalSalary;
		int indexOfMax = i;

		for (int j = i + 1; j < employees.size(); ++j)
		{
			if (employees[j].totalSalary > maxTotalSalary)
			{
				maxTotalSalary = employees[j].totalSalary;
				indexOfMax = j;
			}
		}

		if (indexOfMax != i)
			std::swap(employees[indexOfMax], employees[i]);	
	}
}

void displayEmployees(std::vector<Employee>& employees)
{
	for (Employee employee: employees)
	{
		std::cout << "\nEmployee Name: " << employee.employeeName
			  << "\nAge: " << employee.age
			  << "\nBasic Salary: £" << employee.basicSalary
			  << "\nTotal Salary: £" << employee.totalSalary << "\n";
	}
}

void calculateTotalSalary(Employee& employee)
{
  // Define constants for DA and HRA percentages
  const float DA_PERCENTAGE = 0.1f;
  const float HRA_PERCENTAGE = 0.05f;

  // Calculate Dearness Allowance (DA)
  employee.totalSalary = employee.basicSalary * (1.0f + DA_PERCENTAGE);

  // Calculate House Rent Allowance (HRA)
  employee.totalSalary += employee.basicSalary * HRA_PERCENTAGE;
}

