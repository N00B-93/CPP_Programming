#include "TestScores.hpp"
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <limits>

int main(int argc, char* const argv[])
{
	// Integer to store the number of scores.
	int numberOfScores;
	
	// Constant representing thr maximum score.
	const int MAX_SCORE = 100;
	
	try
	{
		// Prompts the user to enter the number of scores.
		std::cout << "\nEnter the number of scores to be processed: ";
		std::cin >> numberOfScores;
		
		// Throws a runtime exception of the user input is less than 1 or invalid.
		if (std::cin.fail() || numberOfScores < 1)
			throw std::runtime_error("Error: Number of scores should be a positive integer greater that 0, Try again.");
		
		// Creates an array of scores with the number entered by the user.
		double array[numberOfScores];

		for (int i = 0; i < numberOfScores; ++i)
		{
			// Reads in scores into the array.
			std::cout << "\nEnter score[" << i << "]: ";
			std::cin >> array[i];

			// Throws a runtime_error if the score entered is negative or greater than the maximum score.
			if (array[i] < 0 || array[i] > MAX_SCORE || std::cin.fail())
				throw std::runtime_error("\nError: Scores must be a non-negative number <= 100, Try again.");
		}
		
		// Creates a TestScores Object.
		TestScores testScores(numberOfScores, array);
		
		// Displays the average score.
		std::cout << "\nAverage score: " << std::fixed << std::setprecision(2) << testScores.getAverageScore() << "\n";

	}
	catch (std::runtime_error& ex)
	{
		std::cout << "\n" << ex.what() << "\n";
	}

	return (0);

}

