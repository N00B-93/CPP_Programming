#pragma once
#include <string>

class Employee
{
	// Utility functions of the Employee class.
	public:
		Employee();
		Employee(std::string, int, std::string);
		std::string getEmployeeName() const;
		int getEmployeeID() const;
		std::string getDateHired() const;
	
	// Attributes of an Employee.
	protected:
		std::string employeeName;
		int employeeID;
		std::string dateHired;
};

