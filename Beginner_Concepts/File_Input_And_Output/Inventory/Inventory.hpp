#pragma once
#include <string>

// A struct representing an Inventory item.
struct Inventory
{
	std::string itemName;
	std::string dateAdded;
	double retailPrice;
	double wholesalePrice;
	int quantityInStock;
	int itemID;
};

/**
 * Adds an Item to the file containing items.
 *
 * @param filePath The path to the file where the item to be added will be stored.
 */
void addItem(std::string& filePath);

/**
 * Search for an Inventory item from the item database.
 *
 * @param filePath The path to the item database.
 */
void searchItem(std::string& filePath);

/**
 * Update the details of an Item.
 *
 * @param filePath The path to the item database.
 */
void updateItem(std::string& filePath);

/**
 * Deletes an Item from the item database.
 *
 * @param filePath The path to the item database.
 */
void deleteItem(std::string filePath);

/**
 * Displays the information of all the items in the database.
 *
 * @param filePath The path to the item database.
 */
void displayAllItems(std::string filePath);

/**
 * Creates the items database.
 *
 * @param filePath The path to the item database.
 */
void createDatabase(std::string& filePath);

void displayItemDetails(Inventory& item);

void displayMenu();
