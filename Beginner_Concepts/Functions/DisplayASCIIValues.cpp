#include <iostream>
#include <iomanip>

/**
    This is a program that displays the ASCII values of the letters from 'a' to 'm', 6 numbers perline
    using a function with the header;
                    void printASCII(char ch1, char ch2, int numberPerLine)
*/

void printASCII(char ch1, char ch2, int numberPerLine);  // Prototype of the printASCII function.

int main(void)
{
    // Displays the ASCII values of the letters from 'a' to 'm'.
    printASCII('a', 'm', 6);

    return (0);
}

/**
 * Displays the ASCII values of characters from a start point to an end point.
 * 
 * @param ch1 The start point.
 * @param ch2 The end point.
 * @param numberPerLine The number of ASCII values to be displayed per line.
*/
void printASCII(char ch1, char ch2, int numberPerLine)
{
    int lineCounter = 0;

    for (int i = int(ch1); i <= int(ch2); ++i)
    {
        std::cout << std::setw(4) << int(i) << " ";
        ++lineCounter;
        if (lineCounter % numberPerLine == 0)
            std::cout << "\n";
    }
}
