#include <iostream>
#include <string>

/**
	This is a program that prompts the user to enter an integer and then displays the average of
	digits in even numbered indices with the aid of a function with header;
			double avgOfEvenPlaces(int n)
*/

double avgOfEvenPlaces(int n);  // Prototype of the avgOfEvenPlaces function.

int main(void)
{
	// Variable to hold the number entered by the user.
	std::string number;

	// Prompts the user to enter a positive integer >= 10.
	std::cout << "\nEnter a positive integer >= 10: ";
	std::cin >> number;

	// Displays an error message and terminates the program if the user input is invalid.
	if (number == "" or number.length() < 2 or number[0] == '-')
	{
		std::cout << "\nError: Use positive integers >= 10 only, Try again.\n";
		exit(EXIT_FAILURE);
	}
	else if (number.length() == 2 or number.length() == 3)  // Displays the average of even placed digits if the number has 2 or 3 digits.
	{
		std::cout << "\nThe average of the even place digit(s) is: " << number[1] << "\n";
		exit(EXIT_SUCCESS);
	}
	else if (number.length() > 9)  // Displays an error message and terminates the program if the size of the user input is greater than size of an int.
	{
		std::cout << "\nError: size of " << number << " is greater than size of int\nTry again with a number with less than 10 digits.\n";
		exit(EXIT_FAILURE);
	}

	// Determines the average of the even placed digits.
	double averageOfEvenPlacedDigits = avgOfEvenPlaces(stoi(number));

	// Displays the average of the even placed numbers.
	std::cout << "\nThe average of even placed digits is: " << averageOfEvenPlacedDigits << "\n";

	return (0);
}

/**
 * The determines the average of all odd positioned digits in an integer.
 *
 * @param n The whose whose average of even placed digits is to be determined.
 * @return The average of the even placed digits in an integer.
 */
double avgOfEvenPlaces(int n)
{
	std::string number = std::to_string(n);
	double sumOfEvenPlacedDigits = 0.0;
	int oddPositionCounter = 0;

	for (int i = 0; i < number.length(); ++i)
	{
		if (i != 0 and i % 2 != 0)
		{
			sumOfEvenPlacedDigits += number[i] - '0';
			++oddPositionCounter;
		}
	}

	return sumOfEvenPlacedDigits / oddPositionCounter;
}

