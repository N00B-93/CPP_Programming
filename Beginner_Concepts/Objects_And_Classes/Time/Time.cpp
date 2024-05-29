#include "Time.hpp"
#include <ctime>

/**
 * Instantiates a Time Object with default values for the hours, minutes and seconds.
 */
Time::Time()
{
	// Determines the number of seconds since the unix epoch.
	long int totalSeconds = time(NULL);
	
	// Determines the current second, current minute and current hour.
        long int currentSecond = totalSeconds % 60;
        long int totalMinutes = totalSeconds / 60;
        long int currentMinute = totalMinutes % 60;
        long int totalHours = totalMinutes / 60;
        long int currentHour = totalHours % 24;
	
	// Initialize the Time Object's fields with the current second, current minute and current hour.
        hours = currentHour;
        minutes = currentMinute;
        seconds = currentSecond;
}

/**
 * Instantiates a new Time Object.
 *
 * @param The total seconds elapsed.
 */
Time::Time(long int totalSeconds)
{
	// Determines the current second, current minute and current hour.
        long int currentSecond = totalSeconds % 60;
        long int totalMinutes = totalSeconds / 60;
        long int currentMinute = totalMinutes % 60;
        long int totalHours = totalMinutes / 60;
        long int currentHour = totalHours % 24;
	
	// Initialize the Time Object's fields with the current second, current minute and current hour.
        hours = currentHour;
        minutes = currentMinute;
        seconds = currentSecond;
}

/**
 * Instantiates a new Time Object.
 *
 * @param hoursElapsed The hours.
 * @param minutesElapsed The minutes.
 * @param secondsElapsed The seconds.
 */
Time::Time(long int hoursElapsed, long int minutesElapsed, long int secondsElapsed)
{
	hours = hoursElapsed;
	minutes = minutesElapsed;
	seconds = secondsElapsed;
}

/**
 * Sets the Time to a new Time using a specified number of seconds.
 *
 * @param elapsedTime The number of seconds elapsed.
 */
void Time::setElapsedTime(long int elapsedTime)
{
    	// Determines the current second, current minute and current hour.
        long int currentSecond = elapsedTime % 60;
        long int totalMinutes = elapsedTime / 60;
        long int currentMinute = totalMinutes % 60;
        long int totalHours = totalMinutes / 60;
        long int currentHour = totalHours % 24;
	
	// Initialize the Time Object's fields with the current second, current minute and current hour.
        hours = currentHour;
        minutes = currentMinute;
        seconds = currentSecond;
}

