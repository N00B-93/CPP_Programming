#include "TestScores.hpp"

/**
 * Instantiates a new TestScores Object.
 *
 * @param array An array of scores.
 * @param size The number of test scores.
 */
TestScores::TestScores(int size, double array[])
{
	this->averageScore = this->calculateAverageScore(array, size);
}

/**
 * Calculates the average of an array of scores
 *
 * @return The average of an array of scores.
 */
double TestScores::calculateAverageScore(double array[], int size)
{
	double totalScore = 0.0;

	for (int i = 0; i < size; ++i)
		totalScore += array[i];

	return totalScore / size;
}

/**
 * This returns the average score of a TestScores.
 *
 * @return The average of a TestScores.
 */
double TestScores::getAverageScore() const
{
	return this->averageScore;
}

