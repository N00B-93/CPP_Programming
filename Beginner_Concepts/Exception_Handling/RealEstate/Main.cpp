#include "RealEstate.hpp"
#include <iostream>

int main(int argc, char* const argv[])
{
	try
	{
		// Creates a RealEstate Object.
		RealEstate realEstate;
		
		// Reads in field values of the RealEstate Object.
		std::cin >> realEstate;
		
		// Displays the RealEstate Object.
		std::cout << "\n\t\tProperty details.";
		std::cout << realEstate;
	}
	catch (std::runtime_error error)
	{
		std::cout << "\n" << error.what() << "\n";
	}

	return (0);
}

