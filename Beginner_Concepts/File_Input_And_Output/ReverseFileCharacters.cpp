#include <iostream>
#include <fstream>
#include <string>


/**
	This is a program that prompts the user to enter the path to a file, read each line of text from
	the file, reverses the characters in the line of text and then writes the result to an output file specified by the user.
*/


/** This reverses the characters in a string.
 *
 * @param str The string whose characters are to be reversed.
 */
void reverseCharacters(std::string& str)
{
	for (int i = 0, j = str.length() - 1; i < str.length() / 2; ++i, --j)
	{
		char tempChar = str[i];
		str[i] = str[j];
		str[j] = tempChar;
	}
}

int main(int argc, char* const argv[])
{
	// Variables to hold the path to the source and destination file.
	std::string srcPath, destPath;

	// Prompts the user to enter the path to the source file.
	std::cout << "\nEnter the path to the text file: ";
	std::cin >> srcPath;
	
	std::fstream inputStream(srcPath.c_str(), std::ios::in);

	// Displays an error message and terminates the program if the source file doesn't exist.
	if (inputStream.fail())
	{
		std::cerr << "\nError: '" << srcPath << "' doesn't exist, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Prompts the user to enter the name of the destination file.
	std::cout << "\nEnter the name of the file where the output will be saved: ";
	std::cin >> destPath;

	std::fstream outputStream(destPath.c_str(), std::ios::out);

	// A string to hold each line of text read from the file.
	std::string line;

	while (getline(inputStream, line))
	{
		reverseCharacters(line);

		outputStream << line << "\n";
	}

	std::cout << "\nAll lines of text in '" << srcPath << "' written to '" << destPath << "' successfully!\n";

	// Closes both files.
	inputStream.close();
	outputStream.close();

	return (0);
}

