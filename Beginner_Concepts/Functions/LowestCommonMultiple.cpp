#include <iostream>

/**
    This is a progran that prompts the user to enter two integers and then
    display their lowest common multiple using a function with the header;
                    int LowestCommonMultiple(int num1, int num2)
*/

int lowestCommonMultiple(int num1, int num2);

int main(void)
{
    // Variables to hold the two digits entered by the user.
    int number1, number2;

    // Prompts the user to enter two positive integers greater than 0.
    std::cout << "\nEnter two integers > 0: ";
    std::cin >> number1 >> number2;

    // Displays an error messgae and terminates the program if the user input is invalid.
    if (std::cin.fail() or number1 < 0 or number2 < 0)
    {
        std::cout << "\nError: Use integers > 0 only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays the LCM of the two numbers.
    std::cout << "\nThe LCM of " << number1 << " and " << number2 << " is: " << lowestCommonMultiple(number1, number2) << "\n";

    return (0);
}

/**
 * Determins the lowest common multiple of two integers.
 * 
 * @param num1 The first integer.
 * @param num2 The second integer.
 * @return The lowest common of two numbers.
*/
int lowestCommonMultiple(int num1, int num2)
{
    int maxNum = (num1 > num2) ? num1 : num2; // Find the maximum of the two numbers

    // Loop to find the LCM
    while (true)
    {
        if (maxNum % num1 == 0 and maxNum % num2 == 0)
            return maxNum;
        ++maxNum;
    }
}
