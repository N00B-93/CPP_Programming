#include <iostream>
#include <fstream>
#include <string>

/**
	This is a program that prompts the user to enter the name of or path to a file and then displays
	the first 10 lines of text in the file. if the file contains less than 10 lines, all content of
	the file is displayed with a message indicating that the entire file content has been displayed.
*/

int main(int argc, char* const argv[])
{
	// Constant to hold the number of lines to be read from a file.
	const int NUMBER_OF_LINES = 10;

	// Variable to hold the name of or path to a file.
	std::string filePath;

	// Prompts the user to enter the name of or path to a file.
	std::cout << "\nPlease enter the name of or path to a file: ";
	std::cin >> filePath;

	std::fstream inputStream(filePath.c_str(), std::ios::in);

	// Displays an error message and terminates the program if the file does't exist.
	if (inputStream.fail())
	{
		std::cout << "\nError: '" << filePath << "' doesn't exist, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Displays the specified number of characters from the file.
	std::cout << "\nFirst " << NUMBER_OF_LINES << " lines in '" << filePath << "':\n";
	for (int i = 0; i < NUMBER_OF_LINES; ++i)
	{
		if (inputStream.fail() && i != 10)
		{
			std::cout << "\n'" << filePath <<"' contains less than " << NUMBER_OF_LINES << " lines.\n";
			break;
		}

		// Reads a line of text from the file.
		std::string line;
		getline(inputStream, line);
		
		// Displays the line read from the file.
		std::cout << line << "\n";
	}
	
	// Closes the file.
	inputStream.close();

	return (0);
}

