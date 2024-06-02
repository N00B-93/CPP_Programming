#include "MyInteger.hpp"
#include <iostream>

/**
    This is a driver program to test the functionalities of the MyInteger class.
*/

int main(int argc, char const *argv[])
{
    MyInteger myInt(1);

    std::cout << std::boolalpha << "Value: " << myInt.getValue() << "\n";
    std::cout << std::boolalpha << "Is Even: " << myInt.isEven() << "\n";
    std::cout << std::boolalpha << "Is Odd: " << myInt.isOdd() << "\n";
    std::cout << std::boolalpha << "Is Prime: " << myInt.isPrime() << "\n";

    std::cout << std::boolalpha << "Static Is Even (10): " << MyInteger::isEven(10) << "\n";
    std::cout << std::boolalpha << "Static Is Odd (10): " << MyInteger::isOdd(10) << "\n";
    std::cout << std::boolalpha << "Static Is Prime (10): " << MyInteger::isPrime(10) << "\n";

    std::cout << std::boolalpha << "Static Is Even (myInt): " << MyInteger::isEven(myInt) << "\n";
    std::cout << std::boolalpha << "Static Is Odd (myInt): " << MyInteger::isOdd(myInt) << "\n";
    std::cout << std::boolalpha << "Static Is Prime (myInt): " << MyInteger::isPrime(myInt) << "\n";

    std::cout << std::boolalpha << "Equals 29: " << myInt.equals(29) << "\n";
    std::cout << std::boolalpha << "Equals 30: " << myInt.equals(30) << "\n";

    MyInteger anotherInt(29);
    std::cout << std::boolalpha << "Equals anotherInt: " << myInt.equals(anotherInt) << "\n";

    std::string strValue = "12345";
    std::cout << std::boolalpha << "Parsed int from string '12345': " << MyInteger::parseInt(strValue) << "\n";

    return (0);
}
