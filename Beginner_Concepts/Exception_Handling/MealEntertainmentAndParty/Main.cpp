#include "Party.hpp"
#include <array>
#include <limits>
#include <iostream>

int main(int argc, char const *argv[])
{
    // The size of the array of Parties.
    const int SIZE = 5;

    // Creates an array of 5 Party Objects.
    std::array<Party, SIZE> parties;

    for (int i = 0; i < SIZE; ++i)
    {
        try
        {
            // Reads in data for each Party Object in the array of Parties.
            std::cout << "\nParty " << i + 1;
            std::cin >> parties[i];
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        catch (const OutOfRangeException& ex)
        {
            std::cout << ex.what() << "$" << ex.getValueOutOfRange() << " is invalid, Price should be in the range $" << ex.getLowerLimit() 
                      << " and $" << ex.getUpperLimit() << "\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            --i;
        }
        catch(const std::invalid_argument& ex)
        {
            std::cerr << ex.what() << '\n';
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            --i;
        } 
    }

    // Displays all Party Objects.
    std::cout << "\n\n\t\tDetails of all parties";
    for (Party& party: parties)
        std::cout << party << "\n";
        
    std::cout << "\n";

    return (0);
}
