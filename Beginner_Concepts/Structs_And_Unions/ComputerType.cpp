#include <string>
#include <iostream>
#pragma pack(1)

/**
	This is a program that creates a struct that represents a computer, prompts the user to enter 
	data field for the struct(computer) and then displays the information of the computer.
*/

struct computerType
{
	std::string manufacturer;
	std::string modelType;
	std::string processorType;
	double price;
	int ram;
	int hardDriveSize;
	int yearManufactured;
};

int main(int argc, char* argv[])
{
	// Declares a variable of type computerType.
	computerType myComputer;

	// Prompts the user to enter the name of the manufacturer.
	std::cout << "\nEnter the computer manufacturer name: ";
	getline(std::cin, myComputer.manufacturer);

	// Prompts the user to enter the model type of the Computer.
	std::cout << "\nEnter the computer model(e.g. Laptop or desktop): ";
	getline(std::cin, myComputer.modelType);

	// Prompts the user to enter the computer's processor type.
	std::cout << "\nEnter the computer processor type: ";
	getline(std::cin, myComputer.processorType);

	// Prompts the user to enter the RAM of the computer.
	std::cout << "\nEnter the computer's RAM size in GB: ";
	std::cin >> myComputer.ram;
	
	// Displays an error message and terminates the program if the user enters an invalid RAM.
	if (std::cin.fail() || myComputer.ram <= 0)
	{
		std::cout << "\nError: RAM must be > 0GB, Try again \n";
		exit(EXIT_FAILURE);
	}
	
	// Prompts the user to enter the price of the computer.
	std::cout << "\nEnter the price of the computer: £";
	std::cin >> myComputer.price;
	
	// Displays an error message and terminates the program if the user enters an invalid price.
	if (std::cin.fail() || myComputer.price <= 0)
	{
		std::cout << "\nError: Price must be > £0.0, Try again \n";
		exit(EXIT_FAILURE);
	}
	
	// Prompts the user to enter the hard drive size.
	std::cout << "\nEnter the hard drive size in GB: ";
	std::cin >> myComputer.hardDriveSize;

	// Displays an error message and terminates the program if the user enters an invalid hard drive size.
	if (std::cin.fail() || myComputer.hardDriveSize <= 0)
	{
		std::cout << "\nError: Hard drive size must be > 0GB, Try again \n";
		exit(EXIT_FAILURE);
	}

	// Prompts the user to enter the year of manufacture of the computer.
	std::cout << "\nEnter the computer's year of manufacture: ";
	std::cin >> myComputer.yearManufactured;

	// Displays an error message and terminates the program if the user enters an invalid year manufactured.
	if (std::cin.fail() || myComputer.yearManufactured <= 0)
	{
		std::cout << "\nError: Use a valid year, e.g., 2008, Try again \n";
		exit(EXIT_FAILURE);
	}

	// Displays the property of the Computer.
	std::cout << "\n\t\tComputer Information.\n";
	std::cout << "\nManufacturer: " << myComputer.manufacturer
		  << "\nModel Type: " << myComputer.modelType
		  << "\nProcessor Type: " << myComputer.processorType
		  << "\nRAM: " << myComputer.ram << "GB"
		  << "\nHard Drive Size: " << myComputer.hardDriveSize << "GB"
		  << "\nYear Of Manufacture: " << myComputer.yearManufactured
		  << "\nPrice: £" << myComputer.price << "\n";

	return (0);
}

