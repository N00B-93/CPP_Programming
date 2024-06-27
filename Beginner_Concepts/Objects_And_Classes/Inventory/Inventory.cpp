#include <iostream>
#include <iomanip>
#include "Inventory.hpp"

// No-arg constructor that initializes all data field to 0.
Inventory::Inventory()
{
	this->itemNumber = 0;
	this->quantity = 0;
	this->cost = 0.0;
	this->totalCost = 0.0;
}

/**
 * Instantiates a new Inventory Object.
 *
 * @param itemNumber A number identifying an Inventory item.
 * @param quantity The quantity of an Inventory item in stock.
 * @param cost The cost of an Inventory item.
 */
Inventory::Inventory(int itemNumber, int quantity, double cost)
{
	this->itemNumber = itemNumber;
	this->quantity = quantity;
	this->cost = cost;
}

/**
 * This returns the total value of an Inventory item.
 *
 * @return Total value of an Inventory item.
 */
double Inventory::getTotalCost()
{
	this->setTotalCost();
	return this->totalCost;
}

/**
 * This returns the cost of an Inventory item.
 *
 * @return The cost of an Inventory item.
 */
double Inventory::getCost() const
{
	return this->cost;
}

/**
 * This returns the quantity of an Inventory item in stock.
 *
 * @return The quantity of an Inventory item in stock.
 */
int Inventory::getQuantity() const
{
	return this->quantity;
}

/**
 * This returns the item number identifying an Inventory item.
 *
 * @return A number identifying an Inventory item.
 */
int Inventory::getItemNumber() const
{
	return this->itemNumber;
}

/**
 * Determines the total value of an Inventory item.
 */
void Inventory::setTotalCost()
{
	this->totalCost = this->quantity * this->cost;
}

/**
 * Sets the Item number to the specified value.
 *
 * @param The new item number.
 */
void Inventory::setItemNumber(int itemNumber)
{
	this->itemNumber = itemNumber;
}

/**
 * Sets the cost of an Inventory item to the specified value.
 *
 * @param cost The new cost.
 */
void Inventory::setCost(double cost)
{
	this->cost = cost;
}

/**
 * Sets the quantity of an Inventory item in stock to the specified value.
 *
 * @param quantity The new quantity of an Inventory item in stock.
 */
void Inventory::setQuantity(int quantity)
{
	this->quantity = quantity;
}

/**
 * Displays information about an Inventory item.
 */
void Inventory::displayDetails()
{
	std::cout << "\nItem Number: " << this->getItemNumber();
	std::cout << "\nQuantity in Stock: " << this->getQuantity();
	std::cout << "\nUnit Cost: $" << std::fixed << std::setprecision(2) << this->getCost();
	std::cout << "\nTotal Value of Stock: $" << std::fixed << std::setprecision(2) << this->getTotalCost() << "\n";
}

