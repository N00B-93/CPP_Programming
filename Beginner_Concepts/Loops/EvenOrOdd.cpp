#include <iostream>
#include <cstdlib>
#include <ctime>

/**
    This is a program that randomly generates 100,000 random integers and then 
    determines the number of even and odd numbers generated.
*/

int main(void)
{
    // Variables to hold the random numbers, the number of even numbers and the number of odd numbers.
    int number, numberOfEven(0), numberOfOdd(0);

    // Seeds the random number generator with the number of seconds since the linux epoch.
    srand(time(NULL));

    // Generates 100,000 random integers.
    for (int i = 0; i < 100'000; ++i)
    {
        number = rand();
        number % 2 == 0 ? numberOfEven++ : numberOfOdd++;
    }

    // Displays the number of even and odd numbers generated.
    std::cout << "\nNumber of even: " << numberOfEven;
    std::cout << "\nNumber of odd: " << numberOfOdd;

    return (0);
}
