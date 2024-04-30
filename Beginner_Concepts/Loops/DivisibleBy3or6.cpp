#include <iostream>

/**
	This is a program that displays all the numbers between 300 and 400 that are divisible by 3 or 6
	but not both, 5 numbers are displayed per line.
*/

int main(void)
{
	// Variable to count number of characters printed per line.
	int count = 0;

	for (int i = 300; i <= 400; ++i)
	{
		if (i % 3 == 0 xor i % 6 == 0)
		{
			std::cout << i << " ";
			count++;
			// Displays a new line after printing 10 characters.
			if (count % 10 == 0)
				std::cout << "\n";
		}
	}

	std::cout << "\n";

	return (0);
}

