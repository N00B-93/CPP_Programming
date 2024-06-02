#pragma once
#include <string>

// An enum representing a Pizza type.
enum Type {DEEP_DISH, HAND_TOSSED, PAN};

// An enum representing a Pizza size.
enum Size {SMALL, MEDIUM, LARGE};

/**
 * The type Pizza.
 */
class Pizza
{
	public:
		Pizza(Type, Size, int);  // No-arg constructor prototype.
		std::string getPizzaType();  // Prototype of the getPizzaType function.
		std::string getPizzaSize();  // Prototype of the getPizzaSize function.
		double getPrice();  // Prototype of the getPrice function.
		void getDescription();  // Prototype of the getDescription function.
		int getNumberOfToppings();  // Prototype of the getNumberOfToppings function.

	// Attributes of a Pizza.
	private:
		Type type;
		Size size;
		int numberOfToppings;
};

