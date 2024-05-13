#include <iostream>
#include <string>

/**
    This is a program that prompts the user to enter a decimal number and then
    displays it's octal equivalent by using a function with the header;
                int dec2Octal(const int& decimal)
*/

int dec2Octal(const int& decimal);  // Prototype of the dec2Octal function.

int main()
{
	// Variable to hold the decimal number entered by the user.
	int decimal;
	
	// Prompts the user to enter a decimal number to be converted to octal.
	std::cout << "\nEnter a positive integer: ";
	std::cin >> decimal;
	
	// Displays an error message and terminates the program if the user's input is invalid.
	if (std::cin.fail() or decimal < 0)
	{
		std::cout << "\nError: Use positive integers only, Try again.\n";
		exit(EXIT_FAILURE);
	}
	else if (decimal == 0)
	{
	    std::cout << "\n" << decimal << " converted to Octal is: 0\n";
	    exit(EXIT_SUCCESS);
	}
	
	// Displays the octal equivalent of the decimal integer entered by the user.
	std::cout << "\n" << decimal << " converted to Octal is: " <<dec2Octal(decimal) << "\n";
	
	return (0);
}

/**
 * Convert a decimal integer to octal.
 *
 * @param decimal The decimal integer to convert.
 * @return The octal representation of the decimal integer as a string.
 */
int dec2Octal(const int& decimal)
{
	std::string octal = "";
	
	int number = decimal;
	
	while (number > 0)
	{
		int remainder = number % 8;
		
	    octal = std::to_string(remainder) + octal;
	    
	    number /= 8;
	}
	
	return stoi(octal);
}

