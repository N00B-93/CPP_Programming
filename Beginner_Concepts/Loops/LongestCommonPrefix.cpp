#include <iostream>
#include <string>

/**
    This is a program that prompts the user to enter two strings and then
    displays the longest common prefix of the two strings.
*/

int main(void)
{
    // Declares two variables to hold the user input.
    std::string str1, str2;

    // Counts the number of characters the two strings have in common.
    int commonCharacter = 0;

    // Prompts the user to enter the first string.
    std::cout << "\nEnter the first string: ";
    getline(std::cin, str1);

    // Prompts the user to enter the second string.
    std::cout << "\nEnter the second string: ";
    getline(std::cin, str2);

    // Displays an error message and terminates the program if one or both of the strings is empty.
    if (str1.empty() || str2.empty())
    {
        std::cout << "\nError: One or both of the strings is empty, Try again.\n";
        return (1);
    }

    // Terminates the program if the two strings doesn't have a common prefix.
    if (str1[0] != str2[0])
    {
        std::cout << "\n'" << str1 << "' and '" << str2 << "' has no common prefix.\n";
        return (2);
    }
    else
    {
        std::cout << "\nThe longest common prefix is: ";
        while (str1[commonCharacter] == str2[commonCharacter] && commonCharacter < str1.length() && commonCharacter < str2.length())
        {
            std::cout << str1[commonCharacter];
            commonCharacter++;
        }
    }

    return (0);
}