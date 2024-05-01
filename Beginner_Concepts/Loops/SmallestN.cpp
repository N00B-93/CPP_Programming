#include <iostream>
#include <cmath>

/**
	This is a program that uses a while loop to find the smallest 
	integer n such that 3^n is greater than 30,000.
*/

int main(void)
{
	// Variable to hold the value of n.
	int n = 0;

	// Continues to loop till 3 ^ n > 30000.
	while (pow(3, n) < 30'000)
		n++;

	// Displays the result.
	std::cout << "\nThe smallest value of n for which 3^n > 30,000 is: " << n << "\n";

	return (0);
}

