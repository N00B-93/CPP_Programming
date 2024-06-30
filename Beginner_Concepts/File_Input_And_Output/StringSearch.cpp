#include <iostream>
#include <fstream>
#include <string>


/**
	This is a program that prompts the user to enter the name or path to a file and a string to be
	searched for in the file and then displays the line numbers in which the string occurs in the file
	and the number of occurrence of the string in the file.
*/


/**
 * Determines the number of occurrence of a string in another string.
 *
 * @param str The main string.
 * @param sub The substring to be searched for.
 * @return The number of occurrence of the main string in the substring.
 */
int countSubstring(const std::string& str, const std::string& sub)
{
	if (sub.length() == 0)
		return (0);

	int count = 0;

	for (size_t offset = str.find(sub); offset != std::string::npos;
	offset = str.find(sub, offset + sub.length()))
		++count;

	return count;
}

int main(int argc, char* const argv[])
{
	// Variables to hold the file name or path and the string to be searched for.
	std::string filePath, stringToSearch;

	// Prompts the user to enter the file name or path.
	std::cout << "\nEnter a file name or path: ";
	getline(std::cin, filePath);

	std::fstream inputStream(filePath.c_str(), std::ios::in);

	// Displays an error message and terminates the program if the file doesn't exist.
	if (inputStream.fail())
	{
		std::cout << "\nError: '" << filePath << "' doesn't exist, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Prompts the user to enter a string to be searched for in the file.
	std::cout << "\nEnter a string to be searched for: ";
	getline(std::cin, stringToSearch);

	// Variable to count the occurrence of the string to be searched in the file.
	int countOccurrence = 0, lines = 0;

	while (!inputStream.fail())
	{
		// Breaks out of the loop is the EOF is reached.
		if (inputStream.eof())
			break;
		
		// Reads a line of string from the file.
		std::string line;
		getline(inputStream, line);
		
		// Increments the line number variable.
		++lines;

		// Displays the line number if the string to be searched is found.
		if (line.find(stringToSearch) != std::string::npos)
		{
			countOccurrence += countSubstring(line, stringToSearch);
			std::cout << "\n'" << stringToSearch << "' found in line: " << lines << "\n";
		}
	}
	
	// Closes the file.
	inputStream.close();
	
	// Displays the number of occurrence of the string to be searched for in the file.
	std::cout << "\n'" << stringToSearch << "' occurs in '" << filePath << "' " << countOccurrence << " times.\n";

	return (0);
}

