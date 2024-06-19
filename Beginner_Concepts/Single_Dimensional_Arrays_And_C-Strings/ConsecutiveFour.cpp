#include <iostream>

/**
    This is a program that prompts the user to enter the size of an array and the elements of an array and then
    uses a function with the header;
                            bool isConsecutiveFour(const int values[], int size)
    to check if the array has four consecutive numbers with the same value.
*/

bool isConsecutiveFour(const int values[], int size);  // Prototype of the isConsecutiveFour function.

int main(int argc, char const *argv[])
{
    // Variable to hold the size of the array
    int size;

    // Prompts the user to enter the number of elements in the array.
    std::cout << "\nPlease enter the number of elements in the array: ";
    std::cin >> size;

    // Validates the size of the array entered by the user.
    if (std::cin.fail() || size < 4)
    {
        std::cout << "\nError: The array must contain at least 4 elements, Try again with a size >= 4.\n";
        exit(EXIT_FAILURE);
    }

    // Prompts the user to enter the elements of the array.
    int array[size];
    std::cout << "\nEnter the " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i)
        std::cin >> array[i];

    // Checksif the array has an element with consecutive four values.
    isConsecutiveFour(array, size) ? std::cout << "\nThe array has an element with consecutive four values.\n" : std::cout << "\nThe array doesn't have an element with consecutive four values.\n";

    return (0);
}

/**
 * Checks if an array has an element with consecutive four values.
 * 
 * @param values The array whose elements are to be checked for consecutive four values.
 * @param size The number of elements in the array.
 * @return true if an element has consecutive four values, else false.
*/
bool isConsecutiveFour(const int values[], int size)
{
    for (int i = 0; i < size - 3; ++i)
    {
        if (values[i] == values[i + 1] && values[i] == values[i + 2] && values[i] == values[i + 3])
            return true;
    }
    return false;
}
