#include <iostream>
#include <cmath>

/**
    A prime number is called an Additive prime if the sum of its digits is also a prime number.
    This is a program that finds the first 25 additive prime numbers and displays them in a tabular form.
*/

// Prototypes of the isPrime and sumOfDigits methods
bool isPrime(int & number);
int sumOfDigits(int number);

int main(void)
{
    // Variable to hold the end point of the loop printing additive primes.
    int endPoint = 0;

    // Displays the first 25 additive primes.
    std::cout << "\nPrime Number\t" << "Sum of digits\n";
    for (int i = 2; ; ++i)
    {
        int sum = sumOfDigits(i);

        if (isPrime(i) and isPrime(sum))
        {
            std::cout << i << "\t\t" << sum << "\n";
            ++endPoint;
        }
        if (endPoint == 25)
        break;
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
 * Determines the sum of digits in an integer.
 * 
 * @param number The number whose sum of digits is to be determined.
 * @return The sum of digits in an integer.
*/
int sumOfDigits(int number)
{
    int sum = 0;

    while (number > 0)
    {
        int remainder = number % 10;
        sum += remainder;
        number /= 10;
    }
    return sum; 
}
