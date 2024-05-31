#include <iostream>
#include <vector>
#include "RetailItem.hpp"

/**
	This is a driver program that tests the functionalities of the RetailItem class.
*/

void displayDetails(std::vector<RetailItem> retailItems);  // Prototype of the getDetails function.

int main(int argc, char* argv[])
{
	// Creates three RetailItem Objects.
	RetailItem item1("Jacket", 12, 59.95), item2("Designer Jeans", 40, 34.95), item3("Shirt", 20, 24.95);

	// Creates a vector and add the RetailItems to it.
	std::vector<RetailItem> retailItems = {item1, item2, item3};

	// Displays the details of each of the items.
	std::cout << "\n\t\tItem Details\n";
	displayDetails(retailItems);
	
	return (0);
}

/**
 * Displays the information about each RetailItem in a vector of RetailItems.
 *
 * @param retailItems A vector of RetailItems.
 */
void displayDetails(std::vector<RetailItem> retailItems)
{
	for (RetailItem item: retailItems)
	{
		std::cout << "\nItem Description: " << item.getDescription();
		std::cout << "\nUnits Available: " << item.getUnitsOnHand();
		std::cout << "\nPrice: £" << item.getPrice();
		std::cout << "\n";
	}
}

