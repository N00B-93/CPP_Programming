#include "Time.hpp"
#include <ctime>

void setMinsHoursAndSecs(long int, long int&, long int&, long int&);  // Prototype of the setMinsHoursAndSecs function.

/**
 * Instantiates a Time Object with default values for the hours, minutes and seconds.
 */
Time::Time()
{
	// Determines the number of seconds since the unix epoch.
	long int totalSeconds = time(NULL);
	
        setMinsHoursAndSecs(totalSeconds, hours, minutes, seconds);
}

/**
 * Instantiates a new Time Object.
 *
 * @param totalSeconds The total seconds elapsed.
 */
Time::Time(long int totalSeconds)
{
        setMinsHoursAndSecs(totalSeconds, hours, minutes, seconds);
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
        setMinsHoursAndSecs(elapsedTime, hours, minutes, seconds);
}

/**
 * Sets the hours, minutes and seconds of a Time Object to a new value based on a specified elapsed time.
 * 
 * @param totalSeconds The elapsed time in seconds.
 * @param hour A variable to contain the hour derived from the elapsed time.
 * @param minutes A variable to contain the minutes derived from the elapsed time.
 * @param seconds A variable to contain the seconds derived from the elapsed time.
*/
void setMinsHoursAndSecs(long int totalSeconds, long int& hours, long int& minutes, long int& seconds)
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
