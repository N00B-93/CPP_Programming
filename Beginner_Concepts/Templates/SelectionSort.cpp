#include <iostream>

/**
	This is a program that sorts generic arrays using the selection sort algorithm.
*/

/**
 * Sorts a generic array in ascending order using bubble sort algorithm.
 *
 * @param array The array to be sorted.
 * @param size The number of elements in the array to be sorted.
 */
template<typename T>
void selectionSort(T array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		T currentMin = array[i];
		int minIndex = i;

		for (int j = i + 1; j < size; ++j)
		{
			if (array[j] < currentMin)
			{
				currentMin = array[j];
				minIndex = j;
			}
		}

		if (minIndex != i)
		{
			array[minIndex]= array[i];
			array[i] = currentMin;
		}
	}
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
	selectionSort(intArray, SIZE);
	selectionSort(doubleArray, SIZE);
	selectionSort(stringArray, SIZE);

	// Display each of the sorted array.
	std::cout << "\nThe sorted int array is: ";
	displayArray(intArray, SIZE);
	std::cout << "\nThe sorted double array is: ";
	displayArray(doubleArray, SIZE);
	std::cout << "\nThe sorted string array is: ";
	displayArray(stringArray, SIZE);

	return (0);
}

