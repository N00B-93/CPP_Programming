#include <iostream>
#include "EvenNumber.hpp"

/**
    This is a program designed to test the functionalities of the EvenNumber class.
*/

int main(int argc, char const *argv[])
{
    // Creates an EvenNummber Object with value 16.
    EvenNumber evenNumber(16);

    // Displays the next even number.
    std::cout << "\nThe next even number after " << evenNumber.getValue() << " is: " << evenNumber.getNext();

    // Displays the previous even Number.
    std::cout << "\nThe previous even number before " << evenNumber.getValue() << " is: " << evenNumber.getPrevious() << "\n";

    return (0);
}
