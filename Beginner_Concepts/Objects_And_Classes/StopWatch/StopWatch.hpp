#pragma once

/**
 * The type StopWatch
 */
class StopWatch
{
	public:
		StopWatch(); // No-arg constructor
		long int getStartTime();  // Prototype of the getStartTime function.
		long int getEndTime();  // Prototype of the getEndTime function.
		void start();  // Prototype of the start function.
		void stop();  // Prototype of the start function.
		long int getElapsedTime();  // Prototype of the get elapsed time function.
	
	// Attributes of a StopWatch.
	private:
		long int startTime;
		long int endTime;
};

