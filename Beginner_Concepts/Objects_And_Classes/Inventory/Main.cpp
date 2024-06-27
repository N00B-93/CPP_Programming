#include <iostream>
#include <vector>
#include "Inventory.hpp"

/**
	This is a driver program for the Inventory class.
*/

int main(int argc, char* const argv[])
{
	// Creates five Inventory Objects.
	Inventory item1;
	item1.setItemNumber(101);
	item1.setCost(4.55);
	item1.setQuantity(45);

	Inventory item2;
	item2.setItemNumber(102);
	item2.setCost(11.23);
	item2.setQuantity(26);

	Inventory item3(103, 34, 55.43);
	Inventory item4(104, 65, 23.90);
	Inventory item5(105, 17, 7.99);

	// Creates a vector of Inventory items and add all Objects to it.
	std::vector<Inventory> items = {item1, item2, item3, item4, item5};

	// Displays information about all items in the vector of items.
	std::cout << "\n\t\tItems Information\n";
	for (Inventory item: items)
	{
		item.displayDetails();
		std::cout << "\n";
	}

	return (0);
}

