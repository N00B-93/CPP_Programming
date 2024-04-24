#include <iostream>

/**
	This is a program that reads an unspecified number of integers, determines how many positive and negative values 
	have been read, and computes the total and average of 
the input values (not counting zeros). 
*/

int main(void)
{
	// Declares variables to hold the user input, the number of positive and negative integers, count of all numbers entered and the sum of all numbers.
	int number, numberOfPositive = 0, numberOfNegative = 0, sumOfNumbers = 0, counter = 0;

	while (number != 0)
	{
		// Prompts the user to enter an integer.
		std::cout << "\nEnter an integer(press 0 to end input): ";
		std::cin >> number;
		
		// Breaks out of the loop if the user enters 0.
		if (number == 0)
			break;
		
		// Determines the number of positive and negative integers.
		number > 0 ? numberOfPositive++ : numberOfNegative++;

		// Sums up the user's inputs.
		sumOfNumbers += number;
		counter++;
	}
	
	// Terminates the program if the user only enters 0.
	if (counter == 0)
	{
		std::cout << "\nNo number are entered except 0.\n";
		return (0);
	}

	// Displays the number of positive integers.
	std::cout << "\nNumber of positive integers: " << numberOfPositive << "\n";

	// Displays the number of negative integers.
	std::cout << "\nNumber of negative integers: " << numberOfNegative << "\n";

	// Displays the sum of all numbers.
	std::cout << "\nTotal: " << sumOfNumbers << "\n";

	// Displays the average.
	std::cout << "\nAverage: " << sumOfNumbers / (float(counter)) << "\n";

	return (0);
}

