#include <iostream>
#include <fstream>
#include <string>

/**
	This is a program that prompts the user to enter the name or path to a file and the displays 
	each line of text in the file preceeded by it's corresponding line number.
*/

int main(int argc, char const *argv[])
{
    	// Variable to hold the file name entered by the user.
    	std::string filePath;

    	// Prompts the user to enter the name or path to a file.
    	std::cout << "\nEnter the name of or path to a file: ";
    	std::cin >> filePath;

    	// Opens the file in read mode.
    	std::fstream inputStream(filePath.c_str(), std::ios::in);

    	// Displays an error message and terminates the program if the file doesn't exist.
    	if (inputStream.fail())
    	{
        	std::cerr << "\n" << filePath << " doesn't exist, Try again.\n";
        	exit(EXIT_FAILURE);
    	}

    	// Variable to count the lines in the file and a line of string read from the file..
    	int lineCounter = 1;
    	std::string line;
	
	// Reads lines of text from the file and displays the text and the line number.
    	while (!getline(inputStream, line).eof())
    	{
		std::cout << "\n" << lineCounter << ":\t" << line << "\n";
		++lineCounter;
	}
	
	// Closes the file.
	inputStream.close();

	return (0);
}

