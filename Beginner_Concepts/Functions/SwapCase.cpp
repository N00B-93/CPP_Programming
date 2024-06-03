#include <iostream>

std::string swapCase(const std::string& s);  // Prototype of the swapcase function.
bool containsAlphabeticCharacter(const std::string& str);

/**
    This is a program that prompts the user to enter a string and displays the string with the case of each 
    letter swapped, i.e., uppercase letters become lowercase letters and vice versa.
                    The above is accomplished using a function with the header;
                                string swapCase(const string& s)
*/

int main(void)
{
    // Variable to hold the string entered by the user.
    std::string str;

    // Prompts the user to enter a string whose case is to be swapped.
    std::cout << "\nEnter a string: ";
    getline(std::cin, str);

    // Displays an error message and terminates the program if the user enters an empty string.
    if (str == "" or not containsAlphabeticCharacter(str))
    {
        std::cout << "\nError: Use a string with upper or lower case characters only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays the result.
    std::cout << "\nThe string with the case of each letter swapped is: '" << swapCase(str) << "'\n";

    return (0);
}

/**
 * Swaps the case of characters in a string(lowercase letters becomes uppercase and vice versa).
 * 
 * @param s The string to be processed.
 * @return A new string with the case of each character swapped.
*/
std::string swapCase(const std::string& s)
{
    std::string newString = s;

    for (int i = 0; i < newString.size(); ++i)
    {
        if (islower(newString.at(i)))
            newString.at(i) = newString.at(i) - 32;
        else if (isupper(newString.at(i)))
            newString.at(i) = newString.at(i) + 32;
    }
    return newString;
}

/**
 * This checks if a string contains alphabetic characters.
 * 
 * @param str The string to be processed.
 * @return true if the string contains alphabetic characters, else returns false.
*/
inline bool containsAlphabeticCharacter(const std::string& str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str.at(i)))
            return true;
    }
    return false;
}
