#include "Inventory.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <limits>

void addItem(std::string& filePath)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	// Creates an Inventory struct.
	Inventory item;

	// Prompts the user to enter the item's name.
	std::cout << "\nEnter the item's name: ";
	getline(std::cin, item.itemName);

	// Prompts the user to enter the date the item is being added.
	std::cout << "\nEnter the current date(e.g., dd-mm-yyyy): ";
	getline(std::cin, item.dateAdded);
	
	// Prompts the user to enter the wholesale cost.
	std::cout << "\nEnter the wholesale price of " << item.itemName << ": $";
	std::cin >> item.wholesalePrice;
	
	// Displays an error message and returns to the function caller if the user's wholesale price is invalid.
	if (std::cin.fail() || item.wholesalePrice <= 0)
	{
		std::cerr << "\nError: Wholesale price of " << item.itemName << "  must be > $0.0, Try again.\n";
		std::cin.clear();
		return;
	}
	
	// Prompts the user to enter the retail price.
	std::cout << "\nEnter the retail price of " << item.itemName << ": $";
	std::cin >> item.retailPrice;

	// Displays an error message and return to the function caller if the retail price is invalid.
	if (std::cin.fail() || item.retailPrice <= 0)
	{
		std::cerr << "\nError: Retail price of " << item.itemName << " must be > $0.0, Try again.\n";
		std::cin.clear();
		return;
	}

	// Prompts the user to enter the quantity of the item in stock.
	std::cout << "\nEnter the number of " << item.itemName << " in stock: ";
	std::cin >> item.quantityInStock;

	// Displays an error message and return to the function caller if the quantity in stock is invalid.
	if (std::cin.fail() || item.quantityInStock < 0)
	{
		std::cerr << "\nError: Quantity of " << item.itemName << " must be a positive integer, Try again.\n";
		std::cin.clear();
		return;
	}

	// Prompts the user to enter the item ID number.
	std::cout << "\nEnter the 3-digit item ID number(e.g., 101): ";
	std::cin >> item.itemID;

	// Displays an error message and return to the function caller if the item's ID number is invalid.
	if (std::cin.fail() || item.itemID < 100 || item.itemID > 999)
	{
		std::cerr << "\nError: Use a 3-digit item number, Try again.\n";
		std::cin.clear();
		return;
	}

	// Open the database an adds the new item to it.
	std::fstream inputOutputStream(filePath.c_str(), std::ios::in | std::ios::binary);
	std::vector<Inventory> items;
	inputOutputStream.read(reinterpret_cast<char*>(&items), sizeof(items));

	inputOutputStream.close();
	
	inputOutputStream.open(filePath.c_str(), std::ios::out | std::ios::binary);

	items.push_back(item);

	inputOutputStream.write(reinterpret_cast<char*>(&item), sizeof(item));
	
	std::cout << "\n'" << item.itemName << "' added successfully!\n";

	// Closes the file.
	inputOutputStream.close();

	return;
}


void displayItemDetails(Inventory& item)
{
	std::cout << "\n\t\tItem Information";
	std::cout << "\nItem Name: " << item.itemName;
	std::cout << "\nItem ID: " << item.itemID;
	std::cout << "\nWholesale Price: $" << item.wholesalePrice;
	std::cout << "\nRetail Price: $" << item.retailPrice;
	std::cout << "\nQuantity in Stock: " << item.quantityInStock;
	std::cout << "\nDate Added: " << item.dateAdded;
	std::cout << "\n";
}

void searchItem(std::string& filePath)
{
	int choice;
	bool isFound = false;

	std::fstream inputStream(filePath.c_str(), std::ios::in | std::ios::binary);
	std::vector<Inventory> items;

	std::cout << "\n1. Search by item ID\n2. Search by item name\n";
	std::cout << "\nSelect a choice: ";
	std::cin >> choice;

	if (std::cin.fail() || choice < 1 || choice > 2)
	{
		std::cout << "\nError: Invalid choice selected, Try again with a valid choice.\n";
		return;
	}

	if (choice == 1)
	{
		int idNumber;

		std::cout << "\nEnter 3-digit item ID number: ";
		std::cin >> idNumber;

		// Displays an error message and return to the function caller if the item's ID number is invalid.
		if (std::cin.fail() || idNumber < 100 || idNumber > 999)
		{
			std::cerr << "\nError: Use a 3-digit item number, Try again.\n";
			std::cin.clear();
			return;
		}

		inputStream.read(reinterpret_cast<char*>(&items), sizeof(Inventory));

		for (Inventory item: items)
		{
			if (item.itemID == idNumber)
			{
				std::cout << "\nItem found!!!\n";
				displayItemDetails(item);
				inputStream.close();
				return;
			}
		}

		if (!isFound)
		{
			std::cout << "\nItem not found!\n";
			return;
		}
	}
	else
	{
		std::string name;

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nEnter item name: ";
		getline(std::cin, name);

		inputStream.read(reinterpret_cast<char*>(&items), sizeof(Inventory));

		
		for (Inventory item: items)
		{
			if (item.itemName == name)
			{
				std::cout << "\nItem found!!!\n";
				displayItemDetails(item);
				inputStream.close();
				return;
			}
		}

		if (!isFound)
		{
			std::cout << "\nItem not found!\n";
			return;
		}
	}

	inputStream.close();

}

void displayMenu()
{
	std::cout << "\n\t\tWelcome to N00B's Store.\n";
	std::cout << "\n1. Add an Item\n2. Search for an Item\n3. Update item details\n4. Delete an item\n5. Display all items\n6. Exit\n";
}

void createDatabase(std::string& filePath)
{
	std::vector<Inventory> items;

	std::fstream fileStream(filePath.c_str(), std::ios::in);

	if (!fileStream.is_open())
	{
		fileStream.clear();
		fileStream.open(filePath.c_str(), std::ios::out);
		fileStream.write(reinterpret_cast<char*>(&items), sizeof(items));
		std::cout << "\nItems database created!\n";
	}

	fileStream.close();
}

