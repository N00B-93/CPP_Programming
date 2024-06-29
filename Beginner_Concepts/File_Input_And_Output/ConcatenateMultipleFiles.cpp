#include <iostream>
#include <fstream>
#include <string>

/**
	This is a program that takes several file name and a destination file as command line arguments
	and then concatenates the contents of the source files into the destination file.
*/

int main(int argc, char* const argv[])
{
    // Check for valid number of arguments
    if (argc < 3)
    {
        std::cerr << "Error: Insufficient arguments.\n";
        std::cerr << "Usage: " << argv[0] << " <sourceFile1> <sourceFile2>...<sourceFileN> <destFile>\n";
        return (1);
    }

    // Get the destination file name
    std::string destFile(argv[argc - 1]);

    // Create an output file stream for the destination file
    std::ofstream outfile(destFile);

    // Check if the output file was opened successfully
    if (!outfile.is_open())
    {
        std::cerr << "Error: Could not open destination file: " << destFile << "\n";
        return (1);
    }

    // Read and concatenate content from each source file
    for (int i = 1; i < argc - 1; ++i)
    {
        std::ifstream infile(argv[i]);

        // Check if the source file was opened successfully
        if (!infile.is_open())
	{
            std::cerr << "Error: Could not open source file: " << argv[i] << "\n";
            outfile.close(); // Close the output file even on error
            return (1);
        }

        // Read the source file line by line and write to the destination file
        std::string line;
        while (std::getline(infile, line))
            outfile << line << std::endl;

        infile.close(); // Close the source file after processing
    }

    outfile.close(); // Close the output file after concatenation

    std::cout << "\nFiles concatenated successfully into: " << destFile << std::endl;

    return (0);
}

