#include "StopWatch.hpp"
#include <iostream>

/**
	This is a program that creates a Stopwatch Object and uses it to determine the time taken in seconds 
	to count from 1 - 1,000,000,000.
*/

int main(int argc, char* const argv[])
{
	std::cout << "\nCounting from 1 - 1,000,000,000..." << std::flush;

	// Creates a StopWatch Object.
	StopWatch stopWatch;
	
	// Initializes a counter variable to 1.
	long int i = 1;

	// Starts the StopWatch.
	stopWatch.start();

	// Counts from 1 to 1,000,000,000.
	while (i <= 1'000'000'000)
		++i;

	// Stops the StopWatch.
	stopWatch.stop();

	// Displays the time taken to count to 1,000,000,000.
	std::cout << "\n\nTime taken to count from 1 - 1,000,000,000: " << stopWatch.getElapsedTime() << "s\n";

	return (0);
}

