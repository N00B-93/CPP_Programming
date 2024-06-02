#include <iostream>
#include "Pizza.hpp"
#include <vector>

int main(int argc, char* const argv[])
{
	// Creates three Pizza Object.
	Pizza pizza1(DEEP_DISH, LARGE, 3);
	Pizza pizza2(PAN, MEDIUM, 4);
	Pizza pizza3(HAND_TOSSED, SMALL, 2);

	// Adds the Pizzas to a vector.
	std::vector<Pizza> pizzas = {pizza1, pizza2, pizza3};

	// Displays the Information about each Pizza.
	std::cout << "\n\t\tPizza Information.";
	for (Pizza pizza: pizzas)
		pizza.getDescription();

	return (0);
}

