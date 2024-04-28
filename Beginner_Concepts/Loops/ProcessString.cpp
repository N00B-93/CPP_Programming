#include <iostream>
#include <string.h>

/**
    This is a program that prompts the user to enter a string and displays 
    the characters at the odd positions in the string.
*/

int main(void)
{
    // Declares a variable to hold the string.
    std::string str;

    // Prompts the user to enter a string.
    std::cout << "\nEnter a string: ";
    getline(std::cin, str);

    // Displays an error message and terminates the program if the user enters an empty string.
    if (str == "")
    {
        std::cout << "\nError: Use non-empty strings only, Try again.\n";
        return (1);
    }

    // Displays the characters at odd-numbered positions.
    std::cout << "\nThe characters at odd-numbered positions are: ";
    for (int i = 0; i < str.size(); ++i)
    {
        if (i % 2 != 0)
            std::cout << str.at(i);
    }

    // Displays a newline.
    std::cout << "\n";
     
     return(0);
}