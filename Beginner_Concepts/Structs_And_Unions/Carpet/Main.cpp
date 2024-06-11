#include "Carpet.hpp" 

/**
	This is a driver program for the Carpet struct.
*/

int main(int argc, char* const argv[])
{
	// Creates a Carpet struct.
	Carpet carpet;

	// Prompts the user to enter the length and width of a Carpet.
	std::cout << "\nEnter the length and width of a carpet in feet: ";
	std::cin >> carpet.lengthInFeet >> carpet.widthInFeet;

	// Displays an error message and terminates the program if the user enters an invalid length or width.
	if (std::cin.fail() || carpet.lengthInFeet <= 0 || carpet.widthInFeet <= 0)
	{
		std::cout << "\nError: Carpet length and width must be positive and greater than 0.0 feet, Try again.\n";
		exit(EXIT_FAILURE);
	}

	std::cout << "\nCarpet length: " << carpet.lengthInFeet << " feet";
	std::cout << "\nCarpet Width: " << carpet.widthInFeet << " feet";
	carpet.getArea();

	return (0);
}
