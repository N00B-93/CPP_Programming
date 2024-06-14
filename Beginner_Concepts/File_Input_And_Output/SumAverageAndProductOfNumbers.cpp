#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

/**
	This is a program that prompts the user to enter the name or path to a file containing numbers separated by whitespace characters.
	and then displays the sum, product and average of the numbers in the file.
*/

int main(int argc, char* const argv[])
{
	// Variables to hold the count of numbers in the file, sum, product and average of the numbers in the file.
	double product = 1, sum = 0, average = 0;
	int count = 0;

	// Prompts the user to enter the name of the file.
	std::string fileName;
	std::cout << "\nPlease enter the name or path to the file containing numbers separated by whitespace: ";
	std::cin >> fileName;

	// Opens the file.
	std::ifstream inputFile(fileName.c_str());

	// Displays an error message and terminates the program if the file doesn't exists.
	if (inputFile.fail())
	{
		std::cout << "\nError: '" << fileName << "' doesn't exist, Try again with a valid fileName.\n";
		exit(EXIT_FAILURE);
	}
	
	// Variable to hold each number read from the file.
	double number = 0.0;
	
	// Reads all the numbers in the file and determines their sum, product and count.
	while (inputFile >>  number)
	{
		sum += number;
		product *= number;
		++count;
	}

	// Closes the file.
	inputFile.close();
	
	// Determines the average of the numbers.
	average = sum / count;

	// Displays the sum, product and average of the numbers.
	if (count != 0)
	{
		std::cout << std::fixed << std::setprecision(2) << "\nSum = " << sum
		         << std::fixed << std::setprecision(2) << "\nProduct = " << product
		         << std::fixed << std::setprecision(2) << "\nAverage = " << sum / count;
	}
	else
		std::cout << "\nNo number was read from the file.\nEnsure the file contains numbers separated by whitespaces only, Try again.\n";

	return (0);
}
