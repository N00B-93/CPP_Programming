#include <iostream>
#include <iomanip>
#include <string>

/**
	This is a program that lets the user enter the total rainfall for each of 12 months into 
	an array of doubles. The program then calculates and displays the total rainfall for the year, 
	the average monthly rainfall, and the months with the highest and lowest amounts.
*/

int getIndexOfMaximumValue(double array[], int size);
int getIndexOfMinimumValue(double array[], int size);

int main(void)
{
	// Constant holding the number of month.
	const int NUMBER_OF_MONTHS = 12;

	// Variable to hold invalid user input.
	std::string garbageCollector = "";

	// Variables to hold the total and average rainfall.
	double totalRainfall(0.0), averageRainfall(0.0);

	// An array to hold the monthly rainfall.
	double monthlyRainfall[12];
	
	// An array of strings representing months.
	std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	// Prompts the user to enter the rainfall for each month.
	for (int month = 0; month < NUMBER_OF_MONTHS; ++month)
	{
		std::cout << "\nEnter the amount of rainfall in " << months[month] << ": ";
		std::cin >> monthlyRainfall[month];
		
		// Displays an error message and clears the stdin if the user input is invalid.
		if (std::cin.fail() || monthlyRainfall[month] < 0)
		{
			std::cout << "\nError: Amount of rainfall must be > 0, Try again.\n";
			--month;
			std::cin.clear();
			getline(std::cin, garbageCollector);
			continue;
		}
		
		// Calculates the total rainfall.
		totalRainfall += monthlyRainfall[month];
	}

	// Displays the total rainfall.
	std::cout << std::fixed << std::setprecision(2) <<  "\nThe total annual rainfall is: " << totalRainfall << "\n";

	// Displays the average monthly rainfall.
	std::cout << std::fixed << std::setprecision(2) << "\nThe average monthly rainfall is: " << totalRainfall / NUMBER_OF_MONTHS << "\n";

  // Determines the index of the month with the largest and lowest rainfall.
  int indexOfMonthWithLargestRainfall = getIndexOfMaximumValue(monthlyRainfall, NUMBER_OF_MONTHS);
  int indexOfMonthWithSmallestRainfall = getIndexOfMinimumValue(monthlyRainfall, NUMBER_OF_MONTHS);

  // Displays the months with the maximum and minimum rainfall.
  std::cout << "\nMonth with maximum rainfall: " << months[indexOfMonthWithLargestRainfall] << "\n";
  std::cout << "\nMonth with minimum rainfall: " << months[indexOfMonthWithSmallestRainfall] << "\n";

	return (0);
}

/**
 * This determines the index of the element with the highest value in an array of double values.
 *
 * @param array The array of double values.
 * @param size The number of elements in the array.
 * @return The index of the maximum element in an array of double values.
 */
int getIndexOfMaximumValue(double array[], int size)
{
	int index = 0;
	double maximumElement = array[0];

	for (int i = 0; i < size; ++i)
	{
		if (array[i] > maximumElement)
		{
			maximumElement = array[i];
			index = i;
		}
	}

	return index;
}

/**
 * This determines the index of the element with the lowest value in an array of double values.
 *
 * @param array The array of double values.
 * @param size The number of elements in the array.
 * @return The index of the minimum element in an array of double values.
 */
int getIndexOfMinimumValue(double array[], int size)
{
	int index = 0;
	double minimumElement = array[0];

	for (int i = 0; i < size; ++i)
	{
		if (array[i] < minimumElement)
		{
			minimumElement = array[i];
			index = i;
		}
	}

	return index;
}

