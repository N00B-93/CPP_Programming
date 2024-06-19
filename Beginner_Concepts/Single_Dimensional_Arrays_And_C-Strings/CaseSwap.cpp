#include <iostream>
#include <vector>

/**
    This is a program that prompts the user to enter a string of characters and then swaps the case of each
    letter in the string of characters by using a function with the header;
                    void caseSwap(std::vector<char>& arrayOfCharacters)
*/

void caseSwap(std::vector<char>& arrayOfCharacters);  // Prototype of the caseSwap function.
void displayVector(std::vector<char>& arrayOfCharacters);  // Prototype of the displayVector function.

int main(int argc, char const *argv[])
{
    // Creates a vector to hold the user's input.
    std::vector<char> arrayOfCharacters;

    char userInput;

    // Prompts the user to enter a string.
    std::cout << "\nEnter a string of alphabets(press ENTER to end input): ";

    // Read characters until Enter is pressed.
    while (std::cin.get(userInput) && userInput != '\n')
        arrayOfCharacters.push_back(userInput);

    // Displays an error message if the user enters an empty string.
    if (arrayOfCharacters.empty())
    {
        std::cout << "\nError: Use a string of characters only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Swaps the case of each character in the vector.
    caseSwap(arrayOfCharacters);

    // Displays the vector of characters with the case of each character swapped.
    std::cout << "\nThe characters with their cases swapped is: ";
    displayVector(arrayOfCharacters);

    return 0;
}

/**
 * This swaps the case of the letters in a vector; uppercase are converted to lowercase and vice-versa.
 * 
 * @param arrayOfCharacters The vector containing characters whose case is to be swapped.
*/
void caseSwap(std::vector<char>& arrayOfCharacters)
{
    for (int i = 0; i < arrayOfCharacters.size(); ++i)
    {
        if (isupper(arrayOfCharacters[i]))
            arrayOfCharacters[i] = arrayOfCharacters[i] + 32;
        else if (islower(arrayOfCharacters[i]))
            arrayOfCharacters[i] = arrayOfCharacters[i] - 32;
    }
}

/**
 * Displays a vector of characters.
 * 
 * @param The vector of characters to be displayed.
*/
void displayVector(std::vector<char>& arrayOfCharacters)
{
    for (char letter: arrayOfCharacters)
        std::cout << letter;
}
