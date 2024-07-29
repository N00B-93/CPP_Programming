#include "Television.hpp"
#include <iostream>
#include <array>

int main(int argc, char* const argv[])
{
    // Creates an array of Television Objects.
    std::array<Television, 5> televisions;

    for (int i = 0; i < televisions.size(); ++i)
    {
        try
        {   
            // Reads in the model number, screen size and price of each Television in the array.
            std::cout << "\nTelevision " << i + 1;
            std::cin >> televisions[i];
        }
        catch(const TelevisionException& ex)
        {
            std::cerr << ex.what() << std::endl;
            --i;
        }
        catch (const std::runtime_error& ex)
        {
            std::cerr << "\n" << ex.what() << std::endl;
            --i;
        }
    }

    // Displays the information of all Television in the array.
    std::cout << "\n\t\tTelevision Information.\n";
    for (int i = 0; i < televisions.size(); ++i)
        std::cout << televisions[i];

    return (0);
}
