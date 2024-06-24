#include "Clothing.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    // Creates a Shirt and Pants struct.
    Shirt shirt = {12.36, 16.54};
    Pants pants = {25.14, 30.87};

    // Displays information of the Shirt and the Pants.
    std::cout << "\n\t\tClothing Information\n";
    displayClothingFacts(shirt);
    displayClothingFacts(pants);

    return (0);
}
