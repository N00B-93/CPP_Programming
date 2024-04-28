#include <iostream>
#include <cmath>

/**
    This is a program that prompts the user to enter the center coordinates and radii of two circles and determines whether the second circle is 
    inside the first or overlaps with the first.
*/

int main(void)
{
    // Declares variables to hold the coordinates of the centers and radii of the two circles.
    float x1, y1, r1, x2, y2, r2;

    // Prompts the user to enter the x and y coordinate of the center of the first circle and its radius.
    std::cout << "\nEnter circle1's center x-, y-coordinates, and radius: ";
    std::cin >> x1 >> y1 >> r1;

    // Displays an error message and terminates the program if the user input is invalid.
    if (not std::cin)
    {
        std::cout << "\nError: Invalid input, Try again.\n";
        return (1);
    }

    // Prompts the user to enter the x and y coordinate of the center of the second circle and its radius.
    std::cout << "\nEnter circle2's center x-, y-coordinates, and radius: ";
    std::cin >> x2 >> y2 >> r2;

    // Displays an error message and terminates the program if the user input is invalid.
    if (not std::cin)
    {
        std::cout << "\nError: Invalid input, Try again.\n";
        return (2);
    }

    // Calculates the distance between the center of the two circles.
    float distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    // Determines whether circle2 is in circle1.
    if (distance <= abs(r1 - r2))
        std::cout << "\ncircle2 is inside circle1.\n";
    else if (distance <= (r1 + r2))
        std::cout << "\ncircle2 overlaps circle1.\n";
    else
        std::cout << "\ncircle2 doesn't overlap circle1.\n";

    return (0);
}
