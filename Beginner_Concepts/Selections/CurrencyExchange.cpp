#include <iostream>
#include <iomanip>

/**
	This is a program that prompts the user to enter the exchange rate from currency in USD to Chinese RMB.
	The program then prompts the user to enter 0 to convert RMB to USD or 1 to convert USD to RMB.
*/

int main(void)
{
	// Declares a variable to hold the exchange rate and amount to be converted.
	float exchangeRate, amount;

	// Prompts the user to enter the exchange rate.
	std::cout << "\nEnter the exchange rate from USD to RMB: ";
	std::cin >> exchangeRate;

	// Terminates the program if the user enters an invalid input.
	if (std::cin.fail() or exchangeRate < 1)
	{
		std::cout << "\nError: Exchange rate must be > 0, Try again.\n";
		return (1);
	}

	// Prompts the user to enter 0 to convert USD to RMB or 1 to convert RMB to USD.
	std::cout << "\n0. USD to RMB\n1. RMB to USB\nPlease select an option: ";
	int option;
	std::cin >> option;

	
	// Terminates the program if the user enters an invalid input.
	if (std::cin.fail())
	{
		std::cout << "\nError: Invalid input, Try again.\n";
		return (2);
	}

	// Converts currency based on user's option.
	switch (option)
	{
		case 0:
			std::cout << "\nEnter the amount to be converted from USD to RMB: ";
			std::cin >> amount;

			// Terminates the program if the user enters an invalid input.
			if (std::cin.fail() or amount < 0)
			{
				std::cout << "\nError: Invalid Amount, Try again.\n";
				break;
			}
			
			std::cout << std::fixed << std::setprecision(2);
			std::cout << "\n$" << amount << " is ¥" << amount * exchangeRate << "\n";
			break;
		case 1:
			std::cout << "\nEnter the amount to be converted from RMB to USD: ";
			std::cin >> amount;

			// Terminates the program if the user enters an invalid input.
			if (std::cin.fail() and amount < 0)
			{
				std::cout << "\nError: Amount must be > 0, Try again.\n";
				break;
			}
			
			std::cout << std::fixed << std::setprecision(2);
			std::cout << "\n¥" << amount << " is $" << amount / exchangeRate << "\n";
			break;
		default:
			std::cout << "\nError: Invalid option, Try again.\n";
			break;
	}
	
	return (0);
}
