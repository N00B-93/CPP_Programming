#pragma once

class TestScores
{
	// Utility functions of the TestScores class.
	public:
		TestScores(int size, double array[]);
		double calculateAverageScore(double array[], int size);
		double getAverageScore() const;
	
	// Attribute of a TestScores Object.
	private:
		double averageScore;
};

