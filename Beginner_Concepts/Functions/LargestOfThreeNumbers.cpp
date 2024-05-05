#include <iostream>

void displayLargest(double num1, double num2, double num3);  // Prototype of the displayLargest function.

/**
    This is a program that prompts the user to enter three numbers and invokes the 
    function;
                    void displayLargest(double num1, double num2, double num3)
     to display the largest of them.
*/

int main(void)
{
    // Variables to hold the three numbers.
    double number1, number2, number3;

    // Prompts the user to enter three numbers.
    std::cout << "\nEnter three numbers: ";
    std::cin >> number1 >> number2 >> number3;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail())
    {
        std::cout << "\nError: Use Real numbers only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays the largest of the user's input.
    displayLargest(number1, number2, number3);

    return (0);
}

/**
 * Displays the largest of three numbers.
 * 
 * @param num1 The first number.
 * @param num2 The second number.
 * @param num3 The third number.
*/
void displayLargest(double num1, double num2, double num3)
{
    if (num1 >= num2 and num1 >= num3)
        std::cout << "\n" << num1 << " is the Largest.\n";
    else if (num2 >= num1 and num2 >= num3)
        std::cout << "\n" << num2 << " is the Largest.\n";
    else if (num3 >= num1 and num3 >= num2)
        std::cout << "\n" << num3 << " is the Largest.\n";
}
