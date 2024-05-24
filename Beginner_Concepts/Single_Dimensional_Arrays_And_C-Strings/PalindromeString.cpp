#include <iostream>
#include <vector>

/**
    This is a program that reads in a C string and then determines if it's a palindrome or not by using a function
    with the header;
                    int isPalindrome(const std::vector<char> arrayOfCharacters)
*/

int isPalindrome(const std::vector<char> arrayOfCharacters);  // Prototype of the isPlaindrome function.
void displayVector(std::vector<char> arrayOfCharacters);  // Prototype of the displayVector function.

int main(int argc, char const *argv[])
{
    // Creates a vector to hold the user's input.
    std::vector<char> arrayOfCharacters;

    char userInput;

    // Prompts the user to enter a string.
    std::cout << "\nEnter a string(press ENTER to end input): ";

    // Read characters until Enter is pressed.
    while (std::cin.get(userInput) && userInput != '\n')
        arrayOfCharacters.push_back(userInput);

    // Displays an error message if the user enters an empty string.
    if (arrayOfCharacters.empty())
    {
        std::cout << "\nError: Use a string of characters only, Try again.\n";
        exit(EXIT_FAILURE);
    }
    
    // Vhecks and displays if the user input is a palindrome or not.
    int checkPalindrome = isPalindrome(arrayOfCharacters);
    if (checkPalindrome == arrayOfCharacters.size())
    {
        std::cout << "\n'";
        displayVector(arrayOfCharacters); 
        std::cout << "' is a palindrome.\n";
    }
    else if (checkPalindrome == -1)
    {
        std::cout << "\n'";
        displayVector(arrayOfCharacters); 
        std::cout << "' is not a palindrome.\n";
    }
    
    return (0);
}

/**
 * Checks if a vector of characters is a palindrome or not.
 * 
 * @param arrayOfCharacters A vector containing characters.
 * @return The length of the vector if it's a palindrome, else -1 is returned.
*/
int isPalindrome(const std::vector<char> arrayOfCharacters)
{
    for (int i = 0, j = arrayOfCharacters.size() - 1; i < arrayOfCharacters.size() / 2; ++i, --j)
    {
        if (arrayOfCharacters[i] != arrayOfCharacters[j])
            return -1;
    }
    return arrayOfCharacters.size();
}

/**
 * Displays a vector of characters.
 * 
 * @param The vector of characters to be displayed.
*/
void displayVector(std::vector<char> arrayOfCharacters)
{
    for (char letter: arrayOfCharacters)
        std::cout << letter;
}
