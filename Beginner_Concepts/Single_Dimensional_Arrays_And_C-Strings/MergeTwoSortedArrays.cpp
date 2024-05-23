#include <iostream>

/**
    This is a program that prompts the user to enter two arrays containing integers that are 
    sorted and then merges the two arrays containing the sorted integers by using a functio with the header;
                  void merge(const int list1[], int size1, const int list2[], int size2, int list3[]).
*/

// Static variable to count the number of arrays to be filled with values.
static int numberOfArrays = 1;

bool isSorted(const int array[], int size);  // Prototype of the isSorted function.
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);  // Prototype of the merge function.
int fillArray(int array[], int & numberOfElementsInArray, const int maxSize); // Prototype of the fillArray function.
void displayArray(const int array[], const int size);  // Prototype of the displayArray function.

int main (int argc, char *argv[])
{
  // Constant to hold the maximum number of elements the two arrays can contain.
  const int MAX_SIZE = 80;
  
  // Creates two arrays to hold the sorted lists of numbers the user will enter.
  int array1[MAX_SIZE], array2[MAX_SIZE], array3[MAX_SIZE];

  // Variables to hold the number of elements the user wants to add to each array.
  int numberOfElementsInArray1, numberOfElementsInArray2, numberOfElementsInArray3;

  // Fills array1 and array2 with values.
  numberOfElementsInArray1 = fillArray(array1, numberOfElementsInArray1, MAX_SIZE);

  if (numberOfElementsInArray1 == 0)  // Exits the program if the number of elements in array1 is 0.
    exit(EXIT_FAILURE);
  numberOfElementsInArray2 = fillArray(array2, numberOfElementsInArray2, MAX_SIZE);

    if (numberOfElementsInArray1 == 0)  // Exits the program if the number of elements in array2 is 0.
      exit(EXIT_FAILURE);

  numberOfElementsInArray3 = numberOfElementsInArray1 + numberOfElementsInArray2;
  
  // Displays an error message and terminates the program if the arrays are not already sorted.
  if (!isSorted(array1, numberOfElementsInArray1) || !isSorted(array2, numberOfElementsInArray2))
  {
    std::cout << "\nError: Use sorted arrays only, Try again.\n";
    exit(EXIT_FAILURE);
  }

  // Merges array1 and array2.
  merge(array1, numberOfElementsInArray1, array2, numberOfElementsInArray2, array3);

  // Displays the merged arrays.
  displayArray(array3, numberOfElementsInArray3);

    return 0;
}

/**
 * Checks if an array of integers is sorted in ascending order or not.
 *
 * @param array The array of integers.
 * @param size The number of elements in the array.
 * @return true if the array is sorted in ascending order, else false.
 */
bool isSorted(const int array[], int size)
{
	for (int i = 1; i < size; ++i)
	{
		if (array[i - 1] > array[i])
			return false;
	}
	return true;
}

/**
  * Fills an array with integers.
  * 
  * @param array The array to be filled with integers.
  * @param numberOfElementsInArray The number of elements to be copied into the array.
  * @return The number of elements copied into the array, or returns 0 if the user's first input is <= 0.
  */
int fillArray(int array[], int & numberOfElementsInArray, const int maxSize)
{
    std::cout << "\nEnter elements of array" << numberOfArrays << "(NB: The first integer represents the number of elements to be added to the array): ";
    std::cin >> numberOfElementsInArray;

    if (numberOfElementsInArray > maxSize || numberOfElementsInArray <= 0)
    {
      std::cout << "\nError: First input must be in the range 1 <= " << numberOfElementsInArray << " <= " << maxSize << "\n";
      return (0);
    }

    for (int i = 0; i < numberOfElementsInArray; ++i)
      std::cin >> array[i];

    if (std::cin.fail())
    {
      std::cout << "\nError: Use real numbers only, Try again.\n";
      return (0);
    }

    return numberOfElementsInArray;
}

/**
  * Merges two arrays.
  *
  * @param list1 The first array.
  * @param size1 The number of elements in the first array.
  * @param list2 The second array.
  * @param size2 The number of elements in the second array.
  * @param list3 The array in which the first and second arrays are to be copied to.
  */
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
  int maxLength = size1 + size2, index = 0;
  
  for (; index < size1; index++)
    list3[index] = list1[index];

  for (int i = 0; index < maxLength; index++, i++)
    list3[index] = list2[i];
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

