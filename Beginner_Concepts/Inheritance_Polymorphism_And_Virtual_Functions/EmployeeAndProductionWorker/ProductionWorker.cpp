#include "ProductionWorker.hpp"

/**
 * Instantiates a new ProductionWorker Object with default values.
 */
ProductionWorker::ProductionWorker(): shift(1), hourlyRate(0.0f){};

/**
 * Instantiates a new ProductionWorker.
 *
 * @param name The name of the ProductionWorker.
 * @param IDNumber The ID number of the ProductionWorker.
 * @param dateHired The date the ProductionWorker was hired.
 * @param shiftNo The ProductionWorker's shift.
 * @param hourlyRate The ProductionWorker's hourlyRate.
 */
ProductionWorker::ProductionWorker(std::string name, int IDNumber, std::string dateHired, int shiftNo, float hourlyRate): Employee(name, IDNumber, dateHired)
{
	// Defaults a ProductionWorker's shift to 1 if the specified shift is < 1 or > 2.
	if (shiftNo < 1 || shiftNo > 2)
		this->shift = 1;
	this->shift = shiftNo;
	this->hourlyRate = hourlyRate;
};

/**
 * This returns the shift of a ProductionWorker.
 *
 * @return The shift of a ProductionWorker.
 */
std::string ProductionWorker::getShift() const
{
	if (this->shift == 1)
		return "Day";
	return "Night";
}

/**
 * This returns the hourly rate of a ProductionWorker.
 *
 * @return The hourly rate of a ProductionWorker.
 */
float ProductionWorker::getHourlyRate() const
{
	return this->hourlyRate;
}

/**
 * Sets a ProductionWorker's shift to the specified value.
 *
 * @param shiftNo The ProductionWorker's new shift.
 */
void ProductionWorker::setShift(int shift)
{
	this->shift = shift;
}

/**
 * Sets a ProductionWorker's hourly rate to the specified value.
 *
 * @param hourlyRate The ProductionWorker's new hourly rate.
 */
void ProductionWorker::setHourlyRate(float hourlyRate)
{
	this->hourlyRate = hourlyRate;
}

/**
 * Overloaded << stream insertion operator function.
 *
 * @param outputStream An ostream Object reference.
 * @param staff A ProductionWorker to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, ProductionWorker& staff)
{
	outputStream << "\nName: " << staff.getEmployeeName();
	outputStream << "\nEmployee ID: " << staff.getEmployeeID();
	outputStream << "\nDate Hired: " << staff.getDateHired();
	outputStream << "\nShift: " << staff.getShift();
	outputStream << "\nHourly Rate: $" << staff.getHourlyRate();

	return outputStream;
}

