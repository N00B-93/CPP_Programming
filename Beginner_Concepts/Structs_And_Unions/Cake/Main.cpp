#include "Cake.hpp"
#include <iomanip>

int main(int argc, char* const argv[])
{
	// Creates a variable of type Cake.
	Cake cake;
	
	// Reads in the price of the Cake.
	std::cout << "\nEnter the price of a Cake: $ ";
	std::cin >> cake.price;
	
	// Displays an error messsge and terminates the program if the price entered by the user in <= 0.
	if (std::cin.fail() || cake.price <= 0)
	{
		std::cerr << "\nError: Cake price must be > $0.0, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Reads in the quatity of calories in the Cake.
	std::cout << "\nEnter the quantity of calories in the Cake: ";
	std::cin >> cake.calorieCount;
	
	// Displays an error message and terminates the program if the quantity of calories entered by the user is <= 0.
	if (std::cin.fail() || cake.calorieCount <= 0)
	{
		std::cerr << "\nError: Calorie count should be > 0.0 cal, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Displays information about the Cake.
	std::cout << "\n\t\tCake Information";
	cake.displayCake();

	// Displays the cost per calorie of the Cake.
	std::cout << std::fixed << std::setprecision(2) <<  "\nCost per calorie: $" << cake.getCostPerCalorie() << "\n";

	return (0);
}

