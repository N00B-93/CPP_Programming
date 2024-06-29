#include "Inventory.hpp"
#include <fstream>
#include <iostream>

void addItem(std::string& filePath)
{
	// Creates an Inventory struct.
	Inventory item;

	// Prompts the user to enter the item's name.
	std::cout << "\nEnter the item's name: ";
	getline(std::cin, item->itemName);

	// Prompts the user to enter the date the item is being added.
	std::cout << "\nEnter the current date(e.g., dd-mm-yyyy): ";
	getline(std::cin, item->dateAdded);
	
	// Prompts the user to enter the wholesale cost.
	std::cout << "\nEnter the wholesale price of " << item->itemName << ": $";
	std::cin >> item->item.wholesalePrice;
	
	// Displays an error message and returns to the function caller if the user's wholesale price is invalid.
	if (std::cin.fail() || item.wholesalePrice <= 0)
	{
		std::cerr << "\nError: Wholesale price of " << item->itemName << "  must be > $0.0, Try again.\n";
		std::cin.clear();
		return;
	}
	
	// Prompts the user to enter the retail price.
	std::cout << "\nEnter the retail price of " << item->itemName << ": $";
	std::cin >> item->retailPrice;

	// Displays an error message and return to the function caller if the retail price is invalid.
	if (std::cin.fail() || retailPrice <= 0)
	{
		std::cerr << "\nError: Retail price of " << item->itemName << " must be > $0.0, Try again.\n";
		std::cin.clear();
		return;
	}

	// Prompts the user to enter the quantity of the item in stock.
	std::cout << "\nEnter the number of " << item->intemName << " in stock: ";
	std::cin >> item->quantityInStock;

	// Displays an error message and return to the function caller if the quantity in stock is invalid.
	if (std::cin.fail() || item->quantityInStock < 0)
	{
		std::cerr << "\nError: Quantity of " << item->itemName << " must be a positive integer, Try again.\n";
		std::cin.clear();
		return;
	}

	// Prompts the user to enter the item ID number.
	std::cout << "\nEnter the 3-digit item ID number(e.g., 101): ";
	std::cin >> item->itemID;

	// Displays an error message and return to the function caller if the item's ID number is invalid.
	if (std::cin.fail() || item->itemID < 100 || item -> itemID > 999)
	{
		std::cerr << "\nError: Use a 3-digit item number, Try again.\n";
		std::cin.clear();
		return;
	}
}

