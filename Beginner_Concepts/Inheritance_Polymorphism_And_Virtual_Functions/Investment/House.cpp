#include "House.hpp"
#include <iostream>

/**
 * No-arg constructor that initializes a House with default values.
 */
House::House(): address(""), squareFeet(0.0){};

/**
 * Instantiates a new House Object.
 *
 * @param houseAddress The address of a House.
 * @param dimension The area covered by a House in square feet.
 */
House::House(std::string houseAddress, double dimension): address(houseAddress), squareFeet(dimension){};

/**
 * Displays the properties of a House.
 */
void House::display() const
{
	std::cout << "\nAddress: " << this->getAddress();
	std::cout << "\nSquare Feet: " << this->getSquareFeet() << " sqft";
}

/**
 * This returns the Address of a House.
 *
 * @return The address of a House.
 */
std::string House::getAddress() const
{
	return this->address;
}

/**
 * This returns the area covered by a house in square feet.
 *
 * @return The area covered by a House in square feet.
 */
double House::getSquareFeet() const
{
	return this->squareFeet;
}

