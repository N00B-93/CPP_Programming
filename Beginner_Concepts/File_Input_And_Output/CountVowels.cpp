#include <iostream>
#include <fstream>
#include <string>

/**
	This is a program that prompts the user to enter the name or path to a file and then counts and
	dispplays the number of vowels in the file.
*/

int main(int argc, char* const argv[])
{
	// Variables to hold file name and the count of vowels in the file.
	std::string fileName;
	int vowelCount = 0;
	
	// A string holding upper and lower case vowels.
	std::string vowels = "aeiouAEIOU";

	// Prompts the user to enter a file name.
	std::cout << "\nPlease enter the path to the file to read from: ";
	std::cin >> fileName;
	
	// Opens the input file if it exists.
	std::ifstream inputFile(fileName.c_str());

	// Displays an error message and terminates the program if the input file doesn't exist.
	if (inputFile.fail())
	{
		std::cout << "\nError: " << fileName << " doesn't exist, Try again with a valid file name.\n";
		exit(EXIT_FAILURE);
	}

	while (!inputFile.eof())
	{
		if (inputFile.eof())
			break;

		// Reads a character from the file.
		char alphabet = inputFile.get();
		
		// Increments the vowel counter whenever a vowel is read from the file.
		if (vowels.find(alphabet) != std::string::npos)
			++vowelCount;
	}
	
	// Closes the input file.
	inputFile.close();

	// Displays the number of vowels in the file.
	std::cout << "\nThe number of vowels in '" << fileName << "' is: " << vowelCount << "\n";

	return (0);
}

