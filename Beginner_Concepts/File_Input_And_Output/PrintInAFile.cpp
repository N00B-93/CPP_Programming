#include <iostream>
#include <fstream>
#include <string>

/**
    This is a program that prompts the user to enter the name of or path to a text file, opens the file
    and determines the number of characters in the file and then write the number of characters in the 
    file to the end of the file.
 */

int main(int argc, char const *argv[])
{
    // Variable to hold the file name entered by the user.
    std::string filePath;

    // Prompts the user to enter the name or path to a file.
    std::cout << "\nEnter the name of or path to a file: ";
    std::cin >> filePath;
    
    // Opens the file in read mode.
    std::fstream inputOutputStream(filePath.c_str(), std::ios::in);

    // Displays an error message and terminates the program if the file doesn't exist.
    if (inputOutputStream.fail())
    {
        std::cerr << "\n" << filePath << " doesn't exist, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Variables to hold the number of characters in the file and the character read from the file.
    int numberOfCharacters = 0;
    char character;

    // Determines the number of characters in the file.
    while (inputOutputStream.get(character))
        ++numberOfCharacters;

    // Closes the file.
    inputOutputStream.close();

    // Displays the number of characters in the file.
    std::cout << "\nThe number of characters in the file is: " << numberOfCharacters << "\n";

    // Opens the file in append mode.
    inputOutputStream.open(filePath.c_str(), std::ios::out | std::ios::app);

    // Writes the number of characters in the file to the file.
    inputOutputStream << "\nNumber of characters: " << numberOfCharacters;

    // Closes the file.
    inputOutputStream.close();

    return (0);
}
