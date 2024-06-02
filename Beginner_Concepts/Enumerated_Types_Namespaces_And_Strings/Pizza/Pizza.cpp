#include "Pizza.hpp"
#include <iostream>
#include <iomanip>

/**
 * Instantiates a new Pizza.
 *
 * @param pizzaType The type of Pizza.
 * @param pizzaSize The size of the Pizza.
 * @param toppings The number of Pizza toppings.
 */
Pizza::Pizza(Type pizzaType, Size pizzaSize, int toppings)
{
	size = pizzaSize;
	type = pizzaType;
	numberOfToppings = toppings;
}

/**
 * This returns the type of a Pizza.
 *
 * @return The type of a Pizza.
 */
std::string Pizza::getPizzaType()
{
	if (type == DEEP_DISH)
		return "Deep Dish";
	else if (type == HAND_TOSSED)
		return "Hand Tossed";
	else if (type == PAN)
		return "Pan";
	return "";
}

/**
 * This returns the number of toppings of a Pizza.
 *
 * @return A Pizza's number of toppings.
 */
int Pizza::getNumberOfToppings()
{
	return numberOfToppings;
}

/**
 * This returns the size of a Pizza.
 *
 * @return The size of a Pizza.
 */
std::string Pizza::getPizzaSize()
{
	if (size == SMALL)
		return "Small";
	else if (size == MEDIUM)
		return "Medium";
	else if (size == LARGE)
		return "Large";
	return "";
}

/**
 * This displays a description of a Pizza.
 */
void Pizza::getDescription()
{
	std::cout << "\nPizza Type: " << getPizzaType()
		  << "\nPizza Size: " << getPizzaSize()
		  << "\nNumber of Toppings: " << getNumberOfToppings()
		  << "\nPrice: $" << std::fixed << std::setprecision(2) << getPrice() << "\n";
}

/** This determines the price of a Pizza based of the number of toppings and price.
 *
 * @return The price of a pizza.
 */
double Pizza::getPrice()
{
	double basePrice = 0.0;

	if (size == SMALL)
		basePrice = 10.0;
	else if (size == MEDIUM)
		basePrice = 14.00;
	else if (size == LARGE)
		basePrice = 17.00;

	double totalPrice = basePrice + (numberOfToppings * 2.00);

	return totalPrice;
}

