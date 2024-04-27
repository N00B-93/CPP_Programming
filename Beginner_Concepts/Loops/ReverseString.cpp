#include <iostream>
#include <cstring>

/**
    This is a promgram that prompts the user to enter a string
    and then displays the string in reverse order.
*/

int main(void)
{
    // Declares a variable to hold a string.
    std::string str;

    // Promots the user to enter a string.
    std::cout << "\nEnter a string to be displayed in reverse: ";
    getline(std::cin, str);

    // Terminates the program if the string is an empty string 
    if (str == "")
    {
        std::cout << "\nError: Enter a valid string, Try again.";
        return (1);
    }

    // Displays the string in reverse.
    std::cout << "\n'" << str << "' displayed in reverse is: ";
    for (int i = str.length() - 1; i >= 0; --i)
        std::cout << str[i] << "";
    std::cout << "\n";

    return (0);
}