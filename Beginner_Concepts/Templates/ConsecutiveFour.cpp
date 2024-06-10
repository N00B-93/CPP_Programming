#include <iostream>
#include <vector>
/**
	This is a program that creates a 2-D vector of integers and then determines whether the 2-D 
	vector of integers contains consecutive four elements or not by using a function with the header;
			bool isConsecutiveFour(const std::vector<std::vector<int>>& values)
 */

/**
 * Checks whether a 2D vector (vector of vectors) contains any sequence of four consecutive elements with the same value.
 *
 * @param values  A constant reference to a 2D vector of integers (const vector<vector<int>>& values).
 *
 * @return  A bool value indicating if a sequence of four consecutive elements is found (true) or not 
 * (false). If found, it also provides details about the sequence in the output message.
 *
 * @details  The function iterates through each inner vector in the values argument. For each inner 
 * vector, it checks if there exists a sequence of four consecutive elements where all elements have the same value.
 */
bool isConsecutiveFour(const std::vector<std::vector<int>>& values)
{
	for (std::vector item: values)
	{
		for (int i = 0; i < item.size(); ++i)
		{
			if (item[i] == item[i + 1] && item[i] == item[i + 2] && item[i] == item[i + 3])
				return true;
		}
	}
	return false;
}

int main(int argc, char* const argv[])
{
	// Creates a two dimensional vector of integers.
	std::vector<std::vector<int>> numbers =
	{
		{1, 2, 3, 5, 5, 5, 5, 7, 10},
		{5, 2, 7, 3, 3, }
	};
	
	// Determines whether the 2-D vector contains consecutive four elements or not.
	if (isConsecutiveFour(numbers))
		std::cout << "\nYes, There is a vector with four consecutive elements.\n";
	else
		std::cout << "\nNo vector contains four consecutive elements.\n";

	return (0);
}

