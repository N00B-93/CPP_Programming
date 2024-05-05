#include <iostream>
#include <cmath>

void isArmstrong(int sum, int number);  // Function prototype for the isArmstrong function.
int cubeOfDigits(int number);  // Function prototype for the cubeOfDigits function.

/**
    An integer is an Armstrong integer if the sum of the cubes of its digits is equal to the number itself.
    This is a program that that prompts the user to enter an integer and reports whether it is an 
    Armstrong integer or not, using the functions with the headers;

                    void isArmstrong(int sum, int number)
                    int cubeOfDigits(int number)
*/

int main(void)
{
    // Variable to hold integer entered by the user.
    int number;

    // Prompts the user to enter an integer greater than 0.
    std::cout << "\nEnter an integer greater than 0: ";
    std::cin >> number;

    // Displays an error message and terminates the program if the user input is invalid.
    if (std::cin.fail() or number <= 0)
    {
        std::cout << "\nError: Use positive integers > 0 only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Deetermines the sum of the cube of all the digits in the nuumber.
    int sumOfCubes = cubeOfDigits(number);

    // Displays if the number is an Armstrong number or not.
    isArmstrong(sumOfCubes, number);

    return (0);
}

/**
 * Calculates the sum of the cube of each digit in a number.
 * 
 * @param number The number whose sum of the cube of it's digits is required.
 * @return The sum of the cube ofthe digits in an integer.
*/
int cubeOfDigits(int number)
{
    int sumOfCubes{0};

    while (number > 0)
    {
        int remainder = number % 10;
        sumOfCubes += pow(remainder, 3);
        number /= 10;
    }
    return sumOfCubes;
}

/**
 * Displays whether a number is an Armstrong number or not.
 * 
 * @param sum The sum of cubes of each digit in the number.
 * @param number The number that is to be determined whether it is an Armstrong number or not.
*/
void isArmstrong(int sum, int number)
{
        sum == number ? std::cout << "\n" << number << " is an Armstrong number.\n" : std::cout << "\n" << number << " is not an Armstrong number.\n";
}