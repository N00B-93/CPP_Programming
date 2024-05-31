#pragma once
#include <string>

class RetailItem
{
	// Attributes of a RetailItem.
	std::string description;
	int unitsOnHand;
	double price;

	public:
		RetailItem(std::string, int, double);  // Constructor for a RetailItem.
	
		std::string getDescription();  // Prototype of the getDescription function.
		int getUnitsOnHand();  // Prototype of the getUnitsOnHand function.
		double getPrice();  // Prototype of the getPrice function.
};

