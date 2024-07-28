#include <iostream>
#include "RealEstate.hpp"

/**
 * Instantiates a RealEstate Object with default values.
 */
RealEstate::RealEstate(): price(0.0), numberOfBedrooms(0), numberOfBaths(0){};

/**
 * Instantiates a new RealEstate Object.
 *
 * @param price The price of a RealEstate property.
 * @param numberOfBedrooms The number bedrooms in a RealEstate property.
 * @param numberOfBaths The number of bathrooms in a RealEstate property.
 */
RealEstate::RealEstate(double price, int numberOfBedrooms, int numberOfBaths)
{
	this->price = price;
	this->numberOfBedrooms = numberOfBedrooms;
	this->numberOfBaths = numberOfBaths;
}

/**
 * This returns the price of a RealEstate property.
 *
 * @return The price of a RealEstate property.
 */
double RealEstate::getPrice() const
{
	return this->price;
}

/**
 * This returns the number of bedrooms in a RealEstate property.
 *
 * @return The number of bedrooms in a RealEstate property.
 */
int RealEstate::getNumberOfBedrooms() const
{
	return this->numberOfBedrooms;
}

/**
 * This returns the number of bathrooms in a RealEstate property.
 *
 * @return The number of bathrooms in a RealEstate Object.
 */
int RealEstate::getNumberOfBaths() const
{
	return this->numberOfBaths;
}

/**
 * This sets the price of a RealEstate property to the specified value.
 *
 * @param price The new price of a RealEstate property.
 */
void RealEstate::setPrice(const double price)
{
	this->price = price;
}

/**
 * This sets the number of bedrooms in a RealEstate property to the specified value.
 *
 * @param numberOfBedrooms The new number of bedrooms in a RealEstate property.
 */
void RealEstate::setNumberOfBedrooms(const int numberOfBedrooms)
{
	this->numberOfBedrooms = numberOfBedrooms;
}

/**
 * This sets the number of bathrooms in a RealEstate property to the specified value.
 *
 * @param The new number of bath rooms in a RealEstate property.
 */
void RealEstate::setNumberOfBaths(const int numberOfBaths)
{
	this->numberOfBaths = numberOfBaths;
}

/** Overloads the stream insertion operator for the RealEstate class.
 *
 * @param outputStream A reference to an ostream Object.
 * @param realEstate A reference to the RealEstate Object to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const RealEstate& realEstate)
{
	outputStream << "\nProperty Price: $" << realEstate.getPrice();
	outputStream << "\nNumber of Bedrooms: " << realEstate.getNumberOfBedrooms();
	outputStream << "\nNumber of Baths: " << realEstate.getNumberOfBaths() << "\n";

	return outputStream;
}

/**
 * This overloads the stream extraction operator for the RealEstate class.
 *
 * @param inputStream A reference to an istream Object.
 * @param realEstate The RealEstate Object whose data fields are to be read from the user.
 * @return A reference to an istream Object.
 */
std::istream& operator>>(std::istream& inputStream, RealEstate& realEstate)
{
	double price;
	int numberOfBedrooms, numberOfBaths;

	std::cout << "\nEnter the price of a Property: $";
	inputStream >> price;
	
	if (inputStream.fail() || price <= 0)
	{
		inputStream.clear();
		throw std::runtime_error("Error: Price of a property must be > $0.0.");
	}
		
	std::cout << "\nEnter the number of bedrooms: ";
	inputStream >> numberOfBedrooms;

	if (inputStream.fail() || numberOfBedrooms <= 0)
	{
		inputStream.clear();
		throw std::runtime_error("Error: Number of bedrooms must be >= 1.");
	}

	std::cout << "\nEnter the number of baths: ";
	inputStream >> numberOfBaths;

	if (inputStream.fail() || numberOfBaths <= 0)
	{
		inputStream.clear();
		throw std::runtime_error("Error: Number of bathrooms must be >= 1.");
	}

	realEstate.setPrice(price);
	realEstate.setNumberOfBedrooms(numberOfBedrooms);
	realEstate.setNumberOfBaths(numberOfBaths);
	
	return inputStream;
}

