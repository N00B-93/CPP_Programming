#include <iostream>
#include <algorithm>
#include <limits>
#include <iomanip>

/**
	This is a program that prompts the user to enter the number of scores to be processed, the 
	scores to be processed and then sorts them in ascending order and calculates and displays their average.
*/

double getAverageScore(double* scores, int numberOfScores);  // Prototype of the getAverageScore.

int main(int argc, char* const argv[])
{
	// Variable to hold the number of scores to be entered.
	int numberOfScores;

	// Prompts the user to enter the number of scores to be processed.
	std::cout << "\nEnter the number of scores to be processed: ";
	std::cin >> numberOfScores;

	// Displays an error message and terminates the program if the user enters an invalid number of scores.
	if (std::cin.fail() || numberOfScores <= 0)
	{
		std::cout << "\nError: Number of scores should be greater than 0, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Allocates memory based of the number of scores to hold the scores to be entered by the user.
	double* scores = new double[numberOfScores];

	// Prompts the user to enter the scores to be processed.
	for (int i = 0; i < numberOfScores; ++i)
	{
		std::cout << "\nEnter score[" << i << "]: ";
		std::cin >> *(scores + i);

		if (std::cin.fail() || *(scores + i) < 0)
		{
			std::cout << "\nError: Score must be positive real numbers, Try again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			--i;
			continue;
		}
	}

	// Sort the scores in ascending order.
	std::sort(scores, scores + numberOfScores);

	// Determines the average score.
	double averageScore = getAverageScore(scores, numberOfScores);

	// Displays the sorted scores.
	std::cout << "\nSorted scores:\n";
	for (int i = 0; i < numberOfScores; ++i)
		std::cout << std::fixed << std::setprecision(2) << *(scores + i) << " ";

	// Displays the average score.
	std::cout << std::fixed << std::setprecision(2) << "\n\nAverage Score: " << averageScore << "\n";
	
	// Deallocates the memory reserved to hold scores.
	delete [] scores;

	return (0);
}

/**
 * Determines the average of an array of scores.
 *
 * @param scores A pointer to an array of scores.
 * @return The average of an array of scores.
 */
double getAverageScore(double* scores, int numberOfScores)
{
	double sumOfScores = 0.0;

	for (int i = 0; i < numberOfScores; ++i)
		sumOfScores += *(scores + i);

	return sumOfScores / numberOfScores;
}

