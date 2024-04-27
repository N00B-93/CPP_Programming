#include <iostream>
#include <fstream>
#include <iomanip>

/**
	This is a program that calculates the sum, product and average of numbers in a 
	text file named numbers.txt.
*/

int main(void)
{
	// Initialize variables to hold the sum, product and average of the numbers.
	float sum = 0.0f, product = 1.0f, average = 0.0f;
	
	// Creates an input file stream object.
	std::ifstream input("numbers.txt");

	if (not input.is_open())
	{
		std::cerr << "\n'numbers.txt' doesn't exist!\nCreate a file named 'numbers.txt' containing floating point numbers to use this program.\n";
		return (1);
	}

	// Initialize a variable to determines the amount of numbers stored in the file and a variable to hold a number read from the file.
	int n = 0;
	float number = 0.0f;
	
	// Reads numbers from the file.
	std::cout << "\nThe numbers are: ";
	while (!input.eof())
	{
		input >> number;
		std::cout << number << " ";  // Displays the numbers.
		sum += number;  // Determines the sum of numbers in the file.
		product *= number;  // Determines the product of numbers in the file.
		n += 1;  // Determines the amount of numbers in the file.
	}

	// Closes the file.
	input.close();
	
	// Determines the average of the numbers.
	average = sum / n;

	// Displays the result.
	std::cout << "\nSum = " << sum;
	std::cout << "\nProduct = " << product;
	std::cout << std::setprecision(2) << "\nAverage = " << average;
	std::cout << "\n";

	return (0);
}

