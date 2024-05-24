#include <iostream>

/**
    This is a program that prompts the user to enter 10 integers, adds them to an array and then displays
    distinct numbers (i.e., if a number appears multiple times, it is displayed only once).
*/

void displayArray(const int array[], const int size);  // Prototype of the displayArray function.
bool contains(const int array[], const int value, const int size);  // Prototype of the contains function.

int main(int argc, char const *argv[])
{
    // Constant to hold the size of the array of numbers.
    const int SIZE = 10;

    // Arrays to hold the integers entered by the user and the distinct elements.
    int array[SIZE], distinctElements[SIZE];

    // Prompts the user to enter 10 integers.
    std::cout << "\nEnter " << SIZE << " integers: ";
    for (size_t i = 0; i < SIZE; ++i)
        std::cin >> array[i];

    // Displays an error message and terminates the program if the user input is invalid.
    if (std::cin.fail())
    {
        std::cout << "\nError: Use real integers only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Variable holding the number of distinct elements.
    int numberOfDistinctElements = 0;

    // Determines the distinct elements.
    for (size_t i = 0; i < SIZE; ++i)
    {
        if (!contains(distinctElements, array[i], SIZE))
        {
            distinctElements[numberOfDistinctElements] = array[i];
            ++numberOfDistinctElements;
        }
    }

    // Displays the distinct elements.
    std::cout << "\nThe distinct elements are: ";
    displayArray(distinctElements, numberOfDistinctElements);

    return 0;
}

/**
 * Checks whether an array of integers contains a specified integer.
 * 
 * @param array The array of integers.
 * @param value The value to be searched for.
 * @param size The number of elements in the array.
*/
bool contains(const int array[], const int value, const int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (array[i] == value)
            return true;
    }
    return false;
}

/**
 * Displays an array of integers.
 *
 * @param array The array whose elements is to be displayed.
 * @param size The number of elements in an array.
 */
void displayArray(const int array[], const int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << array[i] << " ";
	std::cout << "\n";
}
