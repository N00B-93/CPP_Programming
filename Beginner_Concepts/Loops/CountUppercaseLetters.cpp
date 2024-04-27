#include <iostream>
#include <cstring>
#include <cctype>

/**
    This is a program that prompts the user to enter a string and then counts and
    displays the number of uppercase letters present in the string.
*/

int main(void)
{
    // Declares variables to hold the string and the number of uppercase letters in the string.
    std::string str;
    int numberOfUppercaseLetters = 0;

    // Prompts the user to enter a string.
    std::cout << "\nEnter a string: ";
    getline(std::cin, str);

    // Displays an error message and terminates the program if the user enters an empty string.
    if (str == "")
    {
        std::cout << "\nError: Use non-empty strings only, Try again.";
        return (1);
    }

    // Calculates the number of uppercase letters present in the string.
    for (char character: str)
    {
        if (isupper(character))
            numberOfUppercaseLetters++;
    }

    // Displays the number of uppercase characters present in the string.
    std::cout << "\nThe number of uppercase characters present in '" << str << "' is: " << numberOfUppercaseLetters << "\n";

    return (0);
}