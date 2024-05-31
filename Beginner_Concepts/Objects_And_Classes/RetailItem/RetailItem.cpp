#include "RetailItem.hpp"

/**
 * Instantiates a new RetailItem.
 *
 * @param desc A string describing the RetailItem.
 * @param quantity The number of the RetailItem available.
 * @param amount The price of the RetailItem.
 */
RetailItem::RetailItem(std::string desc, int quantity, double amount)
{
	description = desc;
	unitsOnHand = quantity;
	price = amount;
}

/**
 * This returns a string describing a RetailItem.
 *
 * @return A string describing a RetailItem.
 */
std::string RetailItem::getDescription()
{
	return description;
}

/**
 * This returns the quantity of a RetailItem available.
 *
 * @return The number of a RetailItem available.
 */
int RetailItem::getUnitsOnHand()
{
	return unitsOnHand;
}

/**
 * This returns the price of a RetailItem.
 *
 * @return The price of a RetailItem.
 */
double RetailItem::getPrice()
{
	return price;
}

