#include <iostream>

/**
    This is a program that prompts the user to enter the number of seconds, 
    displays a message at every second, and terminates when the time expires. 
*/

int main(void)
{
    // Declares a variable to hold the number of seconds.
    int numberOfSeconds;

    // Prompts the user to enter the number of seconds.
    std::cout << "\nEnter the number of seconds: ";
    std::cin >> numberOfSeconds;

    // Displays an error message and terminates the program if the user input is invalid.
    if (numberOfSeconds <= 0 or (not std::cin))
    {
        std::cout << "\nError: Enter an integer >= 0, Try again.\n";
        return (1);
    }

    // Displays the number of second(s) remaining with each run of the loop.
    while (numberOfSeconds >= 0)
    {
        numberOfSeconds--;

        if (numberOfSeconds > 1)
            std::cout << numberOfSeconds << " seconds remaining\n";
        else if (numberOfSeconds == 1)
            std::cout << numberOfSeconds << " second remaining\n";
        else if (numberOfSeconds == 0)
            std::cout << "Stopped\n";
    }

    return (0);
}
