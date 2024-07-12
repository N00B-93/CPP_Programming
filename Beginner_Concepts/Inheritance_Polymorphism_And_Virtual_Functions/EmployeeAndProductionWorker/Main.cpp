#include "Employee.hpp"
#include "ProductionWorker.hpp"
#include <iostream>

int main([[ maybe_unused ]]int argc, [[ maybe_unused ]]char* const argv[])
{
	// Creates a ProductionWorker.
	ProductionWorker staff("Adebisi Demilade", 1044, "31/10/2019", 1, 56.75);
	
	// Displays the ProductionWorker's details before changing the shift and hourly rate.
	std::cout << "\n\t\tEmployee Details\n";
	std::cout << staff;
	
	// Changes the shift and hourly rate.
	staff.setShift(2);
	staff.setHourlyRate(62.43);
	
	// Displays the ProductionWorker's details after the shift and hourly rate has been changed.
	std::cout << "\n\n\t\tEmployee Details\n";
	std::cout << staff;
}

