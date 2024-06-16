#include <iostream>

/**
	Two arrays list1 and list2 are strictly identical if they have the same length and list1[i] equal list2[i] for all i. 
	This is a program that prompts the user to enter the elements of two arrays and determines if they are is strictly identical or not by using a function with the header;
			bool isEqual(const int list1[], const int list2[], int size)
*/

bool strictlyEqual(const int list1[], const int list2[], int size);  // Prototype of the isEqual function.

int fillArray(int array[]);  // Prototype of the fillArray function.

static int listOfNumbers(1);

int main(void)
{
	// Constant to hold the maximum number of elements an array can contain.
	const int MAX_SIZE = 20;

	// Declares two integer arrays.
	int list1[MAX_SIZE], list2[MAX_SIZE];
	
	// Reads in elements into list1.
	int numberOfElementsInList1 = fillArray(list1);

	// Terminates the program if the number of elements read into list1 is 0.
	if (numberOfElementsInList1 == 0)
		exit(EXIT_FAILURE);

	// Reads elements into list2
	int numberOfElementsInList2 = fillArray(list2);

	// Terminates the program if the number of elements read into list2 is 0.
	if (numberOfElementsInList1 == 0)
		exit(EXIT_FAILURE);

	// Displays that the arrays aren't equal and terminates the program 
	// if the number of elements in each array specified by the user is not equal.
	if (numberOfElementsInList1 != numberOfElementsInList2)
	{
		std::cout << "\nlist1 and list2 are not strictly equal.\n";
		exit(EXIT_SUCCESS);
	}

	// Displays the result.
	strictlyEqual(list1, list2, numberOfElementsInList1) ? std::cout << "\nList1 and List2 are strictly equal.\n" : std::cout << "\nList1 and List2 are not strictly equal.\n";

	return (0);
}

/**
 * Fills an array with integer values supplied by the user, the first input represents the number of elements the user wants to add to the list.
 *
 * @param array The array to hold the user's input.
 * @return The number of elements specified by the user. If the user's input is invalid, 0 is returned.
 */
int fillArray(int array[])
{
	int numberOfElements;

	std::cout << "\nEnter elements of array" << listOfNumbers << " (NB: First number in input represents number of elements in the list): ";
	std::cin >> numberOfElements;

	if (std::cin.fail() || numberOfElements <= 0 || numberOfElements > 20)
	{
		std::cout << "\nError: Use integers only\nAlso, first input must be non zero and between 1 and 20, Try again.\n";
		return (0);
	}

	for (int i = 0; i < numberOfElements; ++i)
		std::cin >> array[i];

	listOfNumbers++;

	return numberOfElements;
}

/**
 * This checks if two arrays contains the same elements.
 *
 * @param list1 The first array.
 * @param list2 The second array.
 * @return true if the arrays are equal, else false.
 */
bool strictlyEqual(const int list1[], const int list2[], const int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (list1[i] != list2[i])
			return false;
	}
	return true;
}

