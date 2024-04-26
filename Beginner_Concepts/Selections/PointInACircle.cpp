#include <iostream>
#include <cmath>
#define RADIUS 10

/**
    This is a program that prompts the user to enter the x and y coordinates of a point and checks whether the point is in a circle
    with radius 10 centered at the origin (0, 0).
*/

int main(void)
{
    // Declares variables to hold the x and y coodinates of the point.
    float xCoord, yCoord;

    // Prompts the user to enter the x and y coodinates of the point.
    std::cout << "\nEnter the x and y coordinate (x, y) of the point: ";
    std::cin >> xCoord >> yCoord;
    
    // Terminates the program if the user input is invalid.
    if (not std::cin)
    {
        std::cout << "\nError: Invalid Input, Try again.\n";
        return (1);
    }

    // Calculates the distance of the point to the center of the circle.
    float distance = sqrt(pow(xCoord - 0, 2) + pow(yCoord - 0, 2));

    // Determines if the point is in the circle or not.
    if (distance < RADIUS)
        std::cout << "\nPoint (" << xCoord << ", " << yCoord << ") lies in the circle.\n";
    else if (distance > RADIUS)
        std::cout << "\nPoint (" << xCoord << ", " << yCoord << ") lies outside the circle.\n";
    else if (distance == RADIUS)
        std::cout << "\nPoint (" << xCoord << ", " << yCoord << ") lies on the circle.\n";

    return (0);
}