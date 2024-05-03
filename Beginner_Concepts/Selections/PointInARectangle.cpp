#include <iostream>

/**
    This is a program that prompts the user to enter a point (x, y) and checks whether the point is 
    within the rectangle centered at (0, 0) with width 10 and height 5.
*/

int main()
{
    // Constants for the length and width of the rectangle.
    const float LENGTH = 5.0f, WIDTH = 10.0f;

    // Variables to hold the x and y coordinates of the point entered by the user.
    float xCoord, yCoord;

    // Prompts the user to enter the x and y coordinates of the point.
    std::cout << "\nEnter the x and y coordinates of the point: ";
    std::cin >> xCoord >> yCoord;

    // Checks if the input operation failed.
    if (std::cin.fail())
    {
        std::cout << "\nError: Use Real numbers only. Try again.\n";
        return 1;
    }

    // Checks if the point is in the rectangle.
    if (xCoord > -WIDTH / 2.0f && xCoord < WIDTH / 2.0f && yCoord > -LENGTH / 2.0f && yCoord < LENGTH / 2.0f)
        std::cout << "\nPoint (" << xCoord << ", " << yCoord << ") is in the rectangle.\n";
    else if ((xCoord == -WIDTH / 2.0f || xCoord == WIDTH / 2.0f) && (yCoord >= -LENGTH / 2.0f && yCoord <= LENGTH / 2.0f))
        std::cout << "\nPoint (" << xCoord << ", " << yCoord << ") is on the rectangle.\n";
    else if ((yCoord == -LENGTH / 2.0f || yCoord == LENGTH / 2.0f) && (xCoord >= -WIDTH / 2.0f && xCoord <= WIDTH / 2.0f))
        std::cout << "\nPoint (" << xCoord << ", " << yCoord << ") is on the rectangle.\n";
    else
        std::cout << "\nPoint (" << xCoord << ", " << yCoord << ") is not in the rectangle.\n";

    return 0;
}
