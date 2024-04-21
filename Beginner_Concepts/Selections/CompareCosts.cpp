#include <iostream>

/**
	This is a program that prompts the user to enter the weight in kg and the price of two packages and the displays
	which of the package has the better price.
*/

int main(void)
{
	// Declares variables to hold each package's weight and price.
	float weight1, price1, weight2, price2;

	// Prompts the user to enter the weight and price of package1.
	std::cout << "\nEnter the weight and price of package1: ";
	std::cin >> weight1 >> price1;

	// Displays an error message and terminates the program if the weight or price <= 0.
	if (weight1 <= 0 or price1 <= 0)
	{
		std::cout << "\nError: Weight and price must have non-negative values greater than 0.\n";
		return (1);
	}

	// Prompts the user to enter the weight and price of package2.
	std::cout << "\nEnter the weight and price of package2: ";
	std::cin >> weight2 >> price2;

	// Displays an error message and terminates the program if the weight or price <= 0.
	if (weight2 <= 0 or price2 <= 0)
	{
		std::cout << "\nError: Weight and price must have non-negative values greater than 0.\n";
		return (2);
	}

	// Determines the price per kg of each package.
	float pricePerKg1 = price1 / weight1;
	float pricePerKg2 = price2 / weight2;

	// Displays the result.
	if (pricePerKg1 < pricePerKg2)
		std::cout << "\nPackage1 has a better price.\n";
	else if (pricePerKg1 > pricePerKg2)
		std::cout << "\nPackage2 has a better price.\n";
	else if (pricePerKg1 == pricePerKg2)
		std::cout << "\nBoth packages have the same price.\n";

	return (0);
}

