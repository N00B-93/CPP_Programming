#include <iostream>
#include <iomanip>

/**
    This is a program that prompts the user to enter the three sides of a 
    trinagle and then displays if the triangle is equilateral or not by uaing the functions with the headers;
                        bool isValid(double side1, double side2, double side3)
                        double perimeter(double side1)
*/

bool isValid(double side1, double side2, double side3);
double perimeter(double side1);

int main(void)
{
    // Variables holding the length of three sides of a triangle.
    double side1, side2, side3;

    // Prompts the user to enter the three sides of an equilateral triangle.
    std::cout << "\nEnter the three sides of an equilateral triangle: ";
    std::cin >> side1 >> side2 >> side3;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail() or side1 < 0 or side2 < 0 or side3 < 0)
    {
        std::cout << "\nError: Use positive numbers only as the side of the equilateral triangle.\nTry again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays the result.
    isValid(side1, side2, side3) ? std::cout << std::fixed << std::setprecision(2) << "\nPerimeter = " << perimeter(side1) : std::cout << "\nThe triangle is not an equilateral triangle.\n";
}

/**
 * Checks if a triangle is an equilateral triangle.
 * 
 * @param side1 The first side of the triangle.
 * @param side2 The second side of the triangle.
 * @param side3 The third side of the triangle.
 * @return true if the triangle is equilateral, else false is returned.
*/
bool isValid(double side1, double side2, double side3)
{
    return (side1 == side2 and side2 == side3);
}

/**
 * Determines the perimeter of an equilateral triangle.
 * 
 * @param side1 One of the sides of the equilateral triangle.
 * @return The perimeter of the equilateral triangle.
*/
double perimeter(double side1)
{
    return side1 * 3;
}
