#include <iostream>
#include <iomanip>
#include <cmath>

/**
    An emirp (prime spelled backward) is a nonpalindromic prime number whose reversal is also a prime.
    This is a program that displays the first 100 emirps 10 numbers per line.
*/

bool isPrime(int & number);  // Prototype of the isPrime function.
int reverse(int number);  // Prototype of the reverse functions.

int main(void)
{
    int endPoint = 0;

    std::cout << "\nThe first 100 Emirps are:\n";
    for (int i = 2; endPoint < 100; ++i)
    {
        int reversedNumber = reverse(i);

        if (isPrime(i) and isPrime(reversedNumber))
        {
            std::cout << std::setw(4) << i << " ";  // Displays a number if it's an emirp.
            ++endPoint;
            if (endPoint % 10 == 0)  // Displays a newline after 10 digits has been printed
                std::cout << "\n";
        }
    }

    return (0);
}

/**
 * Checks if a number is prime or not.
 * 
 * @param number The number to be checked.
 * @return true if the number is prime, else false is returned.
*/
bool isPrime(int & number)
{
    bool flag = true;

    for (int j = 2; j <= sqrt(number); j++)
    {
        if (number % j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

/**
 * This returns the reverse of an integer.
 * 
 * @param number The integer to be reversed.
 * @return The reverse of an integer.
*/
int reverse(int number)
{
    int reversedNumber(0);

    while (number > 0)
    {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    return reversedNumber;
}
