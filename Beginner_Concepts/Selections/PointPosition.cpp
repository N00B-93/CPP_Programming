#include <iostream>
#include <cmath>

/**
    Given a directed line from point p0(x0, y0) to p1(x1, y1), the following conditions can be used to decide whether a point p2(x2, y2) is 
    on the left of the line, on the right, or on the same line.
                                                                        > 0 p2 is on the left side of the line
                        (x1 – x0) * (y2 – y0) – (x2 – x0) * (y1 – y0)   = 0 p2 is on the same line
                                                                        < p2 is on the right side of the line
    This is a program that prompts the user to enter the three points for p0, p1, and p2 and displays whether p2 is on the left of the line from p0 to p1, to the right, or on the same line.
*/

int main(void)
{
    // Variable to hold the x and y coordinates of the 3 points.
    float x1, y1,x2, y2, x3, y3;

    // Prompts the user to enter the x and y coordinates of the points p0, p1 and p2.
    std::cout << "\nEnter the x and y coordinates of the point p0, p1 and p2: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (not std::cin)
    {
        std::cout << "\nError: Use numeric characters only as the coordinates of points.\n";
        return (1);
    }

    // Displays whether point p2 is on the left,right or on the directed line segment p0 to p1
    if ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1) > 0)
        std::cout << "\nPoint p2 is on the left side of the line.\n";
    else if ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1) == 0)
        std::cout << "\nPoint p2 is on the same line.\n";
    else if ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1) < 0)
        std::cout << "\nPoint p2 is on the right side of the line.\n";
    
    return (0);
}
