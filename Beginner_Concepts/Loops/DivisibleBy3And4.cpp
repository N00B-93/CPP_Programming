#include <iostream>

/**
	This is a program that displays all the numbers between 1 and 500 that are divisible by 3 and 4.
	The program displays five numbers per line separated by exactly one space.
*/

int main(void)
{
	// Variable to count numbers displayed on a line.
	int count(0);

	for (int i = 1; i <= 500; ++i)
	{
		if (i % 3 == 0 and i % 4 == 0)
		{
			std::cout << i << " ";
			count++;

			// Displays a newline after 5 numbers are printed on a line.
			if (count % 5 == 0)
				std::cout << "\n";
		}
	}

	std::cout << "\n";

	return (0);
}

