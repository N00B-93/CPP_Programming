#include <iostream>
#include <cmath>

/**
	This is a program that finds the largest integer n such that;
		2^n < 30000
*/

int main(void)
{
	// Initializes the variable n to 0.
	int n = 0;
	
	// Continues to loop till 2^n > 30000
	while (pow(2, n) < 30'000)
		n++;
	
	// Displays the result.
	std::cout << "\nThe value of n for which 2^n < 30,000 is: " << n - 1 << "\n";

	return (0);
}

