#include <iostream>

/**
    This is a program that reads integers, finds the largest of them, and counts its occurrences. 
    Assuming that the input ends with number 0.
*/

int main(void)
{
    // Declares a variable to hold the max number, the number of times it occurs and the integer entered by the user.
    int max = 0, count = 0, number = -1;

    // Continues to read in integers till the user enters 0.
    while (number != 0)
    {
        std::cout << "\nEnter an integer(press 0 to end input): ";
        std::cin >> number;

        // Displays an error message and clears the stdin if the user enters an invalid input.
        if (not std::cin)
        {
            std::cout << "\nError: Invalid input, Use integers only.\nTry again.\n";
            std::cin.clear();
            fflush(stdin);
            number = -1;
            continue;
        }
        else if (number != 0 and number == max)  // Increments the count variable if the current number is not 0 and greater than the current max.
            count++;
        else if (number > max)  // Resets the count variable to 0 and increments it by 1 if the current number is greater than max.
        {
            count = 0;
            count++;
            max = number;
        }
    }

    // Displays the maximum number and it's number of occurrence.
    std::cout << "\nThe maximum number is: " << max << "\nNumber of occurrence: " << count << "\n";

    return (0);
}
