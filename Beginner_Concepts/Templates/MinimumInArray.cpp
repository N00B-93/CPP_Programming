#include <iostream>
#include <string>

/**
	This is a program that determines the minimum element in an array of int, double, char and string
	by using a template function with the header;
			T getMinimumElement(T array[], int size)
*/

/**
 * This determines the minimum element in a generic array.
 *
 * @param array An array of generic elements.
 * @param size The number of elements in an array.
 * @return The smallest or minimum element in the array.
 */
template<typename T>
T getMinimumElement(T array[], int size)
{
	T minimum = array[0];

	for (int i = 0; i < size; ++i)
	{
		if (array[i] < minimum)
			minimum = array[i];
	}

	return minimum;
}

int main(int argc, char* const argv[])
{
	// Constant to hold the size of an array.
	const int SIZE = 5;

	// Creates arrays of int, double, char and string.
	int intArray[] = {61, 24, 4, 90, 11};
	double doubleArray[] = {21.3, 5.2, 7.1, 78.8, 33.6};
	char charArray[] = {'G', 'F', 'M', 'B', 'Z'};
	std::string stringArray[] = {"meat", "turkey", "noodle soup", "sandwich", "coffee"};

	// Displays the minimum in each type of array.
	std::cout << "\nMinimum element in int array: " << getMinimumElement(intArray, SIZE) << "\n";
	std::cout << "\nMinimum element in double array: " << getMinimumElement(doubleArray, SIZE) << "\n";
	std::cout << "\nMinimum element in char array: " << getMinimumElement(charArray, SIZE) << "\n";
	std::cout << "\nMinimum element in string array: " << getMinimumElement(stringArray, SIZE) << "\n";

	return (0);
}

