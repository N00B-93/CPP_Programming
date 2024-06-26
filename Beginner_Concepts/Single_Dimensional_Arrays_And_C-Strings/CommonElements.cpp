#include <iostream>

/**
    This is a program that prompts the user to enter two array of 10 integers and then 
    displays the elements common to both arrays.
*/

static int arrayNumber = 1;

void displayArray(const int array[], const int size);  // Prototype of the displayArray function.
bool contains(const int array[], const int value, const int size);  // Prototype of the contains function.
int readElements(int array[], int size);  // Prototype of the readElements function.

int main(int argc, char const *argv[])
{
    // Constant to hold the size of the two arrays.
    const int SIZE = 10;

    // Variable to hold the number of elements common to the two arrays.
    int numberOfCommonElements = 0;
    
    // Creates two arrays to hold user input and an array to hold the elements common to both arrays.
    int array1[SIZE], array2[SIZE], commonElements[SIZE];

    // Reads in the elements of array1.

    // Reads 10 elements into array1 and displays an error message and terminates the program if the user's input is invalid.
    if (readElements(array1, SIZE) != 10 || std::cin.fail())
    {
        std::cout << "\nError: Use 10 integers only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Reads 10 elements into array2 and displays an error message and terminates the program if the user's input is invalid.
    if (readElements(array2, SIZE) != 10 || std::cin.fail())
    {
        std::cout << "\nError: Use 10 integers only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Determines the elements common to both arrays.
    for (int i = 0; i < SIZE; ++i)
    {
        if (contains(array2, array1[i], SIZE) && !contains(commonElements, array1[i], SIZE))
        {
            commonElements[numberOfCommonElements] = array1[i];
            ++numberOfCommonElements;
        }
    }

    // Displays the common elements.
    std::cout << "\nThe common elements are: ";
    displayArray(commonElements, numberOfCommonElements);

    return (0);
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

/**
 * Reads elements into an array.
 * 
 * @param array The array to be filled with elements.
 * @param size The number of elements to be read.
 * @return The number of elements read.
*/
int readElements(int array[], int size)
{
    int numberOfElementsRead = 0;

    std::cout << "\nEnter " << size << " integers for array" << arrayNumber << ": ";
    for (; numberOfElementsRead < size; ++numberOfElementsRead)
    {
        std::cin >> array[numberOfElementsRead];
    }

    arrayNumber++;
    
    return numberOfElementsRead;
}
