#include <iostream>
#include "CaseManipulator.hpp"

int main(int argc, char* const argv[])
{
	// Array to hold user input and the maximum amount of characters it can hold.s
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    // Prompt user for input
    std::cout << "\nEnter a string: ";
    std::cin.getline(input, MAX_LENGTH);

    // Test each function in sequence: reverse, lower, upper
    reverseCase(input);
    std::cout << "\nAfter reversing case: " << input << std::endl;

    toLowercase(input);
    std::cout << "\nAfter converting to lowercase: " << input << std::endl;

    toUppercase(input);
    std::cout << "\nAfter converting to uppercase: " << input << std::endl;

    return (0);
}
