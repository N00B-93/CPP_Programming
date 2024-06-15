#include <iostream>
#include <iomanip>

/**
    This is a program that prompts the user to enter the coordinates of two points (x1, y1) and (x2, y2), and displays the line equation in the slope-intercept form, i.e., y = mx + b.
                m = (y2 - y1)/(x2 - x1) and b = y1 - mx1
*/

int main(void)
{
    // Declares variable to hold the coordinates of the two points.
    float x1, y1, x2, y2;

    // Prompts the user to enter the coordinates of the first point.
    std::cout << "\nEnter the x and y coordinate of the first point: ";
    std::cin >> x1 >> y1;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail())
    {
        std::cout << "\nError: Use real numbers only, Try again.\n";
        exit(EXIT_FAILURE);
    }
    
    // Prompts the user to enter the coordinates of the second point.
    std::cout << "\nEnter the x and y coordinate of the second point: ";
    std::cin >> x2 >> y2;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail())
    {
        std::cout << "\nError: Use real numbers only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Calculates the slope of the line.
    float m = y2 - y1 / (x2 - x1);

    // Calculates the y-intercept of the line.
    float b = y1 - m * x1;

    // Displays the equation of the line.
    std::setprecision(4);
    if (m == 1 && b == 0)
        std::cout << "\nThe line connecting (" << x1 << "," << " " << y1 << ") and (" << x2 << "," << " " << y2 << ")  is: " << " y = x\n";
    else if (m == 1)
        std::cout << "\nThe line connecting (" << x1 << "," << " " << y1 << ") and (" << x2 << "," << " " << y2 << ") is: " << "y = x + " << b << "\n";
    else if (b == 0)
        std::cout << "\nThe line connecting (" << x1 << "," << " " << y1 << ") and (" << x2 << "," << " " << y2 << ") is: " << "y = " << m << "x\n";
    else
        std::cout << "\nThe line connecting (" << x1 << "," << " " << y1 << ") and (" << x2 << "," << " " << y2 << ") is: " << "y = " << m << "x" << " + " << b << "\n";
    
    return (0);
}
