#include "ScoreKeeper.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    // Creates the first ScoreKeeper Object and displays it's data fields.
    std::cout << "\nFirst ScoreKeeper:" << std::endl;
    ScoreKeeper sk1("Math", 3);
    std::cout << sk1;

    // Creates the first ScoreKeeper Object and displays it's data fields.
    std::cout << "\nSecond ScoreKeeper:" << std::endl;
    ScoreKeeper sk2("Physics", 2);
    std::cout << sk2;

    // Demonstrate assignment operator
    std::cout << "\nAssigning sk1 to sk2...\n";
    sk2 = sk1;
    std::cout << "\nsk2 after after assignment:" << std::endl;
    std::cout << sk2;

    // sk2 goes out of scope here and its destructor is called
    return (0);
}
