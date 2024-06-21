#include <iostream>

/**
	This is a program that prompts the user to enter a non-negative integer and then
	displays the factorial of the integer, The factorial of an integer n is given by the formular;
			n! = n * (n - 1) * (n - 2) * ... 3 * 2 * 1.
*/

int main(void)
{
	// Variable to hold the user input.
	unsigned long long int number, tempVar;

	// Prompts the user to enter a non-negative integer.
	std::cout << "\nEnter a non-negative integer <= 20: ";
	std::cin >> number;
	
	// Assigns the user input to a temporary variable.
	tempVar = number;

	// Displays an error message and terminates the program if the user's input is invalid.
	if (std::cin.fail() || number < 0 || number > 20)
	{
		std::cout << "\nError: Use non-negative integers <= 20 only, Try again.\n";
		return (1);
	}

	// Variable to hold the factorial of the number entered by the user.
	unsigned long long int factorial(1);

	// Calculates the factorial of the number.
	while (number > 0)
	{
		factorial *= number;
		number--;
	}

	// Displays the result.
	std::cout << "\nThe factorial of " << tempVar << " is: " << factorial << "\n";

	return (0);
}

