#include <iostream>
#include <ctime>
#include <cstdlib>

/**
    This is a program that generates 10 multiplication problems for three numbers <= 5, prompts the user to enter the answer 
    for each question, displays the number of questions answered correctly and also displays the test time.
*/

int main(void)
{
    // Seeds the random number generator with the Linux epoch
    srand(time(NULL));

    // Declares variables to hold three numbers, the start time, end time of the test and the number of questions answered correctly.
    float number1, number2, number3, answer;
    long int startTime, endTime;
    short int correct;

    // Determines the test start time.
    startTime = time(NULL);

    // Generates 10 multiplication problems.
    for (int i = 0; i < 10; i++)
    {
        // Generates three random numbers between 1 and 5.
        number1 = 1 + rand() % (5);
        number2 = 1 + rand() % (5);
        number3 = 1 + rand() % (5);

        // Prompts the user to enter an answer.
        std::cout << "\nWhat is " << number1 << " x " << number2 << " x " << number3 << "? ";
        std::cin >> answer;
        
        // Displays an error message and clears stdin if user enters an invalid input.
        if (std::cin.fail())
        {
            std::cout << "\nError: Invalid input, Try again.\n";
            std::cin.clear();
            fflush(stdin);
            --i;
            continue;
        }
        // Counts the number of correctly answered questions.
        else if (answer == (number1 * number2 * number3))
            correct++;
    }
    // Determines the test end time.
    endTime = time(NULL);

    // Displays the number of questions answered correctly and the test time.
    std::cout << "\nNumber of questions answered correctly: " << correct;
    std::cout << "\nTest time: " << endTime - startTime << " seconds.\n";
}
