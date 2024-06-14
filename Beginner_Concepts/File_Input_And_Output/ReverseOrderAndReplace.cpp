#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iomanip>

/**
	This is a program that reads the integers from the file, sort the integers, and replaces the 
	unsorted numbers by sorted numbers in the file.
*/

int main(int argc, char* const arg[])
{
	// Variable to hold the file name or path.
	std::string filePath;

	// Prompts the user to enter the name of the file or path.
	std::cout << "\nPlease enter the name or path to a file containing 20 numbers separated by whitespace: ";
	std::cin >> filePath;

	std::fstream inputFile(filePath.c_str(), std::ios::in);
	
	// Displays an error message and terminates the program if the file doesn't exist.
	if (inputFile.fail())
	{
		std::cout << "\nError: '" << filePath << "' doesn't exist, Try again with a valid file name.\n";
		exit(EXIT_FAILURE);
	}
	
	// Creates an array to store 20 numbers.
	const int SIZE = 20;
	double numbers[SIZE] ={0};
	
	// Reads numbers from the file.
	int i = 0;
	while (inputFile >> numbers[i])
		++i;

	// Closes the file.
	inputFile.close();
	
	// Sorts the array of numbers.
	std::cout << "\nSorting the numbers...";
	double* ptr = numbers;
	std::sort(ptr, ptr + 20);
	std::cout << "\nNumbers sorted!";
	// Opens the file.
	inputFile.open(filePath.c_str(), std::ios::out);
	// Writes the sorted data to the file.
	std::cout << "\nWriting sorted numbers back to the file...";
	for (int i = 0, j = 1; i < SIZE; ++i, ++j)
	{
		inputFile << std::fixed << std::setprecision(2) << std::setw(6) << ptr[i] << " ";
		if (j % 5 == 0)
			inputFile << "\n";
	}
	
	// Closes the file.
	inputFile.close();

	return (0);
}

