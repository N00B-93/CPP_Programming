#pragma once

/**
 * The type Time.
 */
class Time
{
	public:
		// Attributes of a Time Object.
		long int seconds;
		long int minutes;
		long int hours;

		Time();  // No-arg constructor prototype.
		Time(long int);  // Parameterized constructor.
		Time(long int, long int, long int);  // Parameterized constructor.

		void setElapsedTime(long int);  // Prototype of the setElapsedTime method.
};

