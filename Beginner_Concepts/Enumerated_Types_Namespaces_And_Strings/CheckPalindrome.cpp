#include <iostream>
#include <string>

/**
    This is a program that prompts the user to enter a string and then uses a 
    function with the header;
                        bool checkPalindrome(const std::string& str)
    to checks if the string is a palindrome or not.
*/

bool checkPalindrome(const std::string& str);  // Prototype of the checkPalindrome function.

int main(int argc, char const *argv[])
{
    // Variable to hold the user's input.
    std::string str;

    // Prompts the user to enter a string.
    std::cout << "\nEnter a string: ";
    getline(std::cin, str);

    // Displays and error message and terminates the program if the user enters an empty string.
    if (str.empty())
    {
        std::cout << "\nError: Use non empty strings only, Try again/\n";
        exit(EXIT_FAILURE);
    }

    // Displays the result.
    if (checkPalindrome(str))
        std::cout << "\n" << str << " is a Palindrome.\n";
    else
        std::cout << "\n" << str << " is not a Palindrome.\n";

    return (0);
}

/**
 * Checks if a string is a palindrome or not assuming letters are case-insensitive.
 * 
 * @param str The string to be processed.
 * @return true if the string is a palindrome, else false.
*/
bool checkPalindrome(const std::string& str)
{
    std::string s = str;

    for (int i = 0, j = s.length() - 1; i < s.length() / 2; ++i, --j)
    {
        if (tolower(s.at(i)) != tolower(s.at(j)))
            return false;
    }

    return true;
}
