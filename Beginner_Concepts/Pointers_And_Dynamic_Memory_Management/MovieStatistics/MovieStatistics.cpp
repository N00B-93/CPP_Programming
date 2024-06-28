#include <iostream>
#include <limits>
#include <iomanip>
#include <algorithm>

/**
 * Calculates the average of an array of integers.
 * 
 * @param array Pointer to the first element in the array of integers.
 * @param size Number of elements in the array.
 * @return The average of the array elements.
 */
double getAverage(int* array, int size)
{
    double sumOfNumbers = 0.0;

    for (int i = 0; i < size; ++i)
        sumOfNumbers += array[i];
    
    return sumOfNumbers / size;
}

/**
 * Calculates the median of an array of integers.
 * 
 * @param array Pointer to the first element in the array of integers.
 * @param size Number of elements in the array.
 * @return The median of the array elements.
 */
double getMedian(int* array, int size)
{
    if (size == 1)
        return array[0];
    else if (size == 2)
        return getAverage(array, size);
    else if (size % 2 != 0)
        return array[size / 2];
    else
    {
        // Sort the array to find the median of the two middle elements
        std::sort(array, array + size);
        return getAverage(array + size / 2 - 1, 2);
    }
}

/**
 * Counts occurrences of a specific integer in an array.
 * 
 * @param array Pointer to the first element in the array of integers.
 * @param key Integer value to count occurrences of.
 * @param size Number of elements in the array.
 * @return Number of times 'key' appears in the array.
 */
int countOccurrence(int* array, int key, int size)
{
    int counter = 0;

    for (int i = 0; i < size; ++i)
    {
        if (array[i] == key)
            ++counter;
    }

    return counter;
}

/**
 * Finds the mode (most frequently occurring number) in an array of integers.
 * 
 * @param array Pointer to the first element in the array of integers.
 * @param size Number of elements in the array.
 * @return The mode of the array elements.
 */
int getMode(int* array, int size)
{
    int maxOccurrence = 0;
    int mode = 0;

    for (int i = 0; i < size; ++i)
    {
        // Count occurrences of current element
        int occurrence = countOccurrence(array, array[i], size);
        if (occurrence > maxOccurrence)
        {
            maxOccurrence = occurrence;
            mode = array[i];
        }
    }

    return mode;
}

int main(int argc, char const *argv[])
{
    // Variable to hold the number of students interviewed.
    int numberOfStudents;

    // Prompts the user to enter the number of students interviewed.
    std::cout << "\nPlease enter the number of students interviewed: ";
    std::cin >> numberOfStudents;

    // Validates user input for number of students
    if (std::cin.fail() || numberOfStudents < 1)
    {
        std::cout << "\nError: Number of students must be greater than 0, Try again.\n";
        exit(EXIT_FAILURE);
    }
    
    // Dynamically allocates an array to hold the number of movies watched by each student.
    int *numberOfMoviesWatched = new int[numberOfStudents];

    // Input the number of movies watched by each student
    for (int i = 0; i < numberOfStudents; ++i)
    {
        // Prompts the user to enter the number of movies watched by a student.
        std::cout << "\nEnter the number of movies watched by student " << i + 1 << ": ";
        std::cin >> numberOfMoviesWatched[i];

        // Validates user input for number of movies watched
        if (std::cin.fail() || numberOfMoviesWatched[i] < 0)
        {
            std::cout << "\nError: Number of movies watched must be a positive integer, Try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            --i;
            continue;
        }
    }

    // Displays the average movies watched by each student.
    std::cout << "\nAverage number of movies watched by each student: " << std::fixed << std::setprecision(2) << getAverage(numberOfMoviesWatched, numberOfStudents) << " movies\n";

    // Displays the median number of movies watched.
    std::cout << "\nThe median number of movies watched is: " << std::fixed << std::setprecision(2) << getMedian(numberOfMoviesWatched, numberOfStudents) << " movies\n";


    // Displays the mode (most frequent number of movies watched).
    std::cout << "\nThe mode (most frequent number of movies watched) is: " << getMode(numberOfMoviesWatched, numberOfStudents) << " movies\n";

    // Deallocate dynamic array
    delete[] numberOfMoviesWatched;

    return (0);
}
