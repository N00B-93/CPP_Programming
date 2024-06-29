#include <iostream>
#include <fstream>
#include <string>

/**
	This is a program that prompts the user to enter the name of or path to a source file containing text encrypted by adding 10 to each character's ASCII value, and a path
	to a destination file, reads the source file character by character, decrypts each character by
	subtracting 10 from its ASCII value and then writes the decrypted output to the destination file.
*/

int main(int argc, char* const argv[])
{
	// Variables to hold the name of the source and destination files.
	std::string srcFile, destFile;

	// Prompts the user to enter the name or path to the source file.
	std::cout << "\nEnter the name or path to the file containing encrypted text: ";
	std::cin >> srcFile;

	std::fstream inputStream(srcFile.c_str(), std::ios::in);

	// Displays an error message and terminates the program if the source file doesn't exist.
	if (inputStream.fail())
	{
		std::cout << "\n'" << srcFile << "' doesn't exist, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Prompts the user to enter the name of the destination file.
	std::cout << "\nEnter the name of the destination file: ";
	std::cin >> destFile;
	
	// Opens the destination file for writing.
	std::fstream outputStream(destFile.c_str(), std::ios::out);

	char character;
	
	// Reads a character from the input file, decrypts it and write to the output file.
	while (inputStream.get(character))
		outputStream.put(character - 10);
	
	std::cout << "\nDecrypted output written to '" << destFile << "' successfully!\n";

	// Closes the files.
	inputStream.close();
	outputStream.close();
	
	return (0);
}

