#pragma once
#include "Employee.hpp"
#include <ostream>

class ProductionWorker: public Employee
{
	// Utility functions of the ProductionWorker class.
	public:
		ProductionWorker();
		ProductionWorker(std::string, int, std::string, int, float);
		std::string getShift() const;
		float getHourlyRate() const;
		void setShift(int shiftNo);
		void setHourlyRate(float newRate);
		friend std::ostream& operator<<(std::ostream&, ProductionWorker&);
	
	// Attributes of a ProductionWorker.
	private:
		int shift;
		float hourlyRate;
};

