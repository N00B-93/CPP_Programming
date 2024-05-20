#include <iostream>
#include <iomanip>
#include <cmath>

/**
    This is a program that prompts the user to enter the diameter of a Pizza in inches, and determines and displays the number of slices 
    of Pizza that can be realized from the whole Pizza. Given that the area of a slice of Pizza is 14.125 inches.
*/

int main(void)
{
    // Constant to hold the value of PI and the area of a slice of pizza.
    const double PI = M_PI, areaOfPizzaSlice = 14.125;
    
    // Variable to hold the diameter of a pizza.
    double pizzaDiameter(0.0);

    // Prompts the user to enter the diameter of the pizza.
    std::cout << "\nEnter the Pizza's diameter in inches: ";
    std::cin >> pizzaDiameter;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail() || pizzaDiameter <= 0)
    {
        std::cout << "\nError: Pizza's diameter must be > 0, Try again.\n";
        exit(EXIT_FAILURE);
    }
    
    // Determines the area of a Pizza.
    double areaOfPizza = PI * pow(pizzaDiameter, 2) / 4;

    // Determines the number of slices in a Pizza.
    double numberOfPizzaSlices = areaOfPizza / areaOfPizzaSlice;

    // Displays the number of Pizza slices derived from a Pizza of given diameter.
    std::cout << "\nThe number of Pizza Slices obtained is: " << std::fixed << std::setprecision(1) << numberOfPizzaSlices << " slices\n";

    return (0);
}
