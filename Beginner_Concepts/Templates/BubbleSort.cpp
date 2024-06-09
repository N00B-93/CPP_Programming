#include <iostream>

/**
	This is a program that sorts generic arrays using the bubble sort algorithm.
*/

/**
 * Swaps two generic types.
 *
 * @param item1 The first generic type to be swapped.
 * @param item2 The second generic type to be swapped.
 */
template<typename T>
void swap(T& item1, T& item2)
{
	T temp = item1;
	item1 = item2;
	item2 = temp;

	return;
}

/**
 * Sorts an array of generic type in ascending order using the bubble sort algorithm.
 *
 * @param array The array whose elements is to be sorted.
 * @param size The number of elements in the array.
 */
template<typename T>
void bubbleSort(T array[], int size)
{
	bool changed = true;

	do
	{
		changed = false;

		for (int j = 0; j < size - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
				changed = true;
			}
		}
	} while (changed);
}

/**
 * Displays the element of a generic array.
 *
 * @param array The array whose elements are to be displayed.
 * @param size The number of elements in the array to be displayed.
 */
template<typename T>
void displayArray(T array[], int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << array[i] << " ";
	std::cout << "\n";
}

int main(int argc, char* const argv[])
{
	// Constant to hold array size.
	const int SIZE = 5;

	// Creates arrays of int, double and string.
	int intArray[] = {5, 3, 4, 1, 2};
	double doubleArray[] = {7.2, -16.6, 54.1, 34.4, 100.8};
	std::string stringArray[] = {"toast", "eggs", "coffee", "apple", "sausage"};

	// Sorts each array.
	bubbleSort(intArray, SIZE);
	bubbleSort(doubleArray, SIZE);
	bubbleSort(stringArray, SIZE);

	// Display each of the sorted array.
	std::cout << "\nThe sorted int array is: ";
	displayArray(intArray, SIZE);
	std::cout << "\nThe sorted double array is: ";
	displayArray(doubleArray, SIZE);
	std::cout << "\nThe sorted string array is: ";
	displayArray(stringArray, SIZE);

	return (0);
}