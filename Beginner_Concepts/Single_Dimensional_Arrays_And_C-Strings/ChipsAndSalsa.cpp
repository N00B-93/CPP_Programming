#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

/**
	This is a program that prompts the user to enter the quantities of different types of Salsa sold 
	and then displays a sales report and the types of Salsa with the highest sales.
*/


/**
 * Determines and displays the Salsa(s) with maximum sales.
 *
 * @param salsa An array of strings representing the different types of Salsa.
 * @param numberOfJarsOfSalsaSold An integer array representing the number of each type of Salsa sold.
 * @param size An integer representing the number of elements in the array of Salsa.
 */
void displayHighestSellingSalsa(std::string salsa[], int numberOfJarsOfSalsaSold[], int size)
{
	// An array to hold the Salsa(s) with maximum sales.
	std::string salsaWithHighestSales[5];

	int maxSales = numberOfJarsOfSalsaSold[0];
	
	// Represents the number of Salsa with maximum sales.
	int numberOfMaxSalsa = 0;
	
	// Determines the maximum sales.
	for (int i = 0; i < size; ++i)
	{
		if (maxSales < numberOfJarsOfSalsaSold[i])
			maxSales = numberOfJarsOfSalsaSold[i];
	}
	
	// Determines the Salsa(s) with maximum sales.
	for (int i = 0, j = 0; i < size; ++i)
	{
		if (numberOfJarsOfSalsaSold[i] == maxSales)
		{
			salsaWithHighestSales[j] = salsa[i];
			++numberOfMaxSalsa;
			++j;
		}
	}
			
	// Displays the Salsas with the maximum sales.
	std::cout << "\nSalsa(s) with maximum sales: ";
	for (int i = 0; i < numberOfMaxSalsa; ++i)
	{
		if (i < numberOfMaxSalsa - 1)
			std::cout << salsaWithHighestSales[i] << ", ";
		else
			std::cout << salsaWithHighestSales[i] << " ";
	}

	std::cout << "\n";
}


/**
 * Displays a Sales report.
 *
 * @param salsa An array of strings containing the different types of Salsa.
 * @param numberOfJarsOfSalsaSold An array of integers representing the number of each type of Salsa that has been sold.
 * @param size An integer to represent the number of elements in the array of Salsa.
 */
void displaySalesReport(std::string salsa[], int numberOfJarsOfSalsaSold[], int size)
{
	int totalSales = 0;

	std::cout << "\n\tSalsa Sales Report\n";
	std::cout << std::setw(10) << "Salsa Type" << std::setw(10) << "\t\tQuantity Sold\n";

	for (int i = 0; i < size; ++i)
	{
		std::cout << std::left << std::setw(10) << salsa[i] << "\t\t" << std::right << std::setw(8) << numberOfJarsOfSalsaSold[i] << "\n";

		totalSales += numberOfJarsOfSalsaSold[i];
	}

	std::cout << std::left << std::setw(10) <<  "\nTotal" << "\t\t" << std::right << std::setw(8) << totalSales << "\n";
	
	// Displays the Salsa(s) with the highest number of sales.
	displayHighestSellingSalsa(salsa, numberOfJarsOfSalsaSold, size);
}

int main(int argc, char* const argv[])
{
	// Constant to hold the size of the array used.
	const int SIZE = 5;

	// Creates an array to hold the different types of salsa.
	std::string salsa[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	
	// Array to hold the number of jars of Salsa sold.
	int numberOfJarsOfSalsaSold[SIZE];

	// Prompts the user to enter the number of jars of each type of Salsa sold in the past month.
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << "\nEnter the number of jars of " << salsa[i] << " sold: ";
		std::cin >> numberOfJarsOfSalsaSold[i];

		// Displays an error message and clears stdin if the user input is invalid.
		if (std::cin.fail() || numberOfJarsOfSalsaSold[i] < 0)
		{
			std::cout << "\nError: Number of Salsa sold must be greater than 0, Try again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			--i;
			continue;
		}
	}

	// Displays a sales report.
	displaySalesReport(salsa, numberOfJarsOfSalsaSold, SIZE);

	return (0);
}

