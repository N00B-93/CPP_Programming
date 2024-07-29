#include "Television.hpp"
#include <limits>
#include <iostream>

/**
 * No-arg constructor that instantiates a Television Object with default values.
 */
Television::Television(): modelNumber(0), screenSize(0), price(0.0){};

/**
 * Instantiates a new Television Object.
 * 
 * @param modelNumber The model number of the Television.
 * @param screenSize The Television's screen size.
 * @param price The price of the Television.
 */
Television::Television(int modelNumber, int screenSize, double price)
{
    this->modelNumber = modelNumber;
    this->screenSize = screenSize;
    this->price = price;
}

/**
 * This returns the model number of a Television.
 * 
 * @return A Television's model number.
 */
int Television::getModelNumber() const
{
    return this->modelNumber;
}

/**
 * This returns the screen size of a Television.
 * 
 * @return A Television's screen size.
 */
int Television::getScreenSize() const
{
    return this->screenSize;
}

/**
 * This returns the price of a Television.
 * 
 * @return A Television's price.
 */
double Television::getPrice() const
{
    return this->price;
}

/**
 * Overloads the stream extraction operator for the Television class.
 * 
 * @param inputStream A reference to an istream Object.
 * @param television The Television Object whose data fields are to be read from the user.
 * @param inputStream A reference to an istream Object.
 */
std::istream& operator>>(std::istream& inputStream, Television& television) throw(TelevisionException, std::runtime_error)
{
    int modelNumber, screenSize;
    double price;

    std::cout << "\nEnter the model number: ";
    inputStream >> modelNumber;

    if (inputStream.fail())
    {
        inputStream.clear();
        inputStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw std::runtime_error("Error: Use only integer values for the Television's model number");
    }
    else if (modelNumber <= 0 || modelNumber > 9999)
        throw TelevisionException("Error: Model number must be positive and not > 9999");

    std::cout << "\nEnter the screen size in inches: ";
    inputStream >> screenSize;

    if (inputStream.fail())
    {
        inputStream.clear();
        inputStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw std::runtime_error("Error: Use only integer values for the Television's screen size");
    }
    else if (screenSize < 12 || screenSize > 70)
        throw TelevisionException("Error: Screen size must be >= 12 inches and <= 70 inches.");

    std::cout << "\nEnter the price: $";
    inputStream >> price;
    if (inputStream.fail())
    {
        inputStream.clear();
        inputStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw std::runtime_error("Error: Use only positive non zero values for the Television's price");
    }

    else if (price <= 0 || price > 5000)
        throw TelevisionException("Error: Price must be greater than $0.0 and less than $5000.00");

    television = Television(modelNumber, screenSize, price);

    return inputStream;
}

/**
 * Overloads the stream insertion operator for the Television class.
 * 
 * @param outputStream A reference to an ostream Object.
 * @param television The Television Object to be displayed.
 * @param outputStream A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const Television& television)
{
    outputStream << "\nModel Number: " << television.getModelNumber();
    outputStream << "\nScreen Size: " << television.getScreenSize() << " inches";
    outputStream << "\nPrice: $" << television.getPrice() << "\n";

    return outputStream;
}
