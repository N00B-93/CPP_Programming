#include "StopWatch.hpp"
#include <ctime>

/**
 * Instantiates a new StopWatch with the startTime set to the currentTime.
 */
StopWatch::StopWatch()
{
	startTime = time(NULL);
}

/**
 * This returns the startTime of a StopWatch.
 *
 * @return The startTime of a StopWatch.
 */
long int StopWatch::getStartTime()
{
	return startTime;
}

/**
 * This returns the endTime of a StopWatch.
 *
 * @return The endTime of a StopWatch.
 */
long int StopWatch::getEndTime()
{
	return endTime;
}

/**
 * This determines the time difference between the startTime and endTime.
 *
 * @return The difference in time between startTime and endTime.
 */
long int StopWatch::getElapsedTime()
{
	return endTime - startTime;
}

/**
 * This resets the startTime to the currentTime.
 */
void StopWatch::start()
{
	startTime = time(NULL);
}

/**
 * This resets the endTime to the current time.
 */
void StopWatch::stop()
{
	endTime = time(NULL);
}

