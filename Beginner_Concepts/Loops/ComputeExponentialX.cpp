#include <iostream>
#include <iomanip>

/**
    This is a program that prompts the user to enter a value for a variable x, and then calculates
    the value of e^x for n = 1, 2, ..., 15 using the series expansion formula:
        e^x = 1 + (x / (1)) + (x^2 / (2!)) + (x^3 / (3!)) + ... + (x^n / (n!))
*/

int main(void)
{
    // Variable to hold the value of x.
    double x;
    
    // Prompts the user to enter the value of x.
    std::cout << "\nEnter the value of x: ";
    std::cin >> x;
    
    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail())
    {
        std::cerr << "Error: Use real numbers only, Try again." << std::endl;
        return EXIT_FAILURE;
    }
    
    // Initialize e^x value and the first term.
    double exponentialX = 1.0;
    double term = 1.0;
    
    // Compute the value of e^x for n = 1 to 15.
    for (int n = 1; n <= 15; ++n)
    {
        term *= x / n;
        exponentialX += term;
    }
    
    // Displays the result with high precision.
    std::cout << std::fixed << std::setprecision(6) << "The value of exp(" << x << ") is: " << exponentialX << "\n";
    
    return (0);
}

