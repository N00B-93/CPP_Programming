#include "Meal.hpp"
#include <iostream>

/**
 * Instantiates a Meal Object with default values.
 */
Meal::Meal(): entree(""), price(0.0){};

/**
 * Instantiates a Meal Object.
 * 
 * @param entreeName The name of the main course of a Meal.
 * @param mealPrice The price of a Meal.
 */
Meal::Meal(std::string& entreeName, double mealPrice): entree(entreeName), price(mealPrice){};

/**
 * This returns the name of the main course of a Meal.
 * 
 * @return The name of a Meal's main course.
 */
std::string Meal::getEntree() const
{
    return this->entree;
}

/**
 * This returns the price of a Meal.
 * 
 * @return The price of a Meal.
 */
double Meal::getPrice() const
{
    return this->price;
}

/**
 * Overloads the stream extraction operator for a Meal Object.
 * 
 * @param inputStream A reference to an istream Object.
 * @param meal The Meal Object whose details are to be read from the user.
 * 
 * @throw invalid_argument exception if the user's input is not numeric.
 * @throw OutOfRangeException if the Meal price entered by the user is less than $5.00 or greater than $29.99.
 * 
 * @return A reference to an istream Object.
 */
std::istream& operator>>(std::istream& inputStream, Meal& meal)
{
    std::string entree;
    double price;

    const double MAX_PRICE = 29.99, MIN_PRICE = 5.00;

    std::cout << "\nEnter the name of the main course: ";
    getline(inputStream, entree);

    std::cout << "\nEnter the price of the meal: $";
    inputStream >> price;

    if (std::cin.fail())
        throw std::invalid_argument("\nError: Price of meal should be in the range 5.00 <= price <= 29.99, Try again.");
    else if (price < MIN_PRICE || price > MAX_PRICE)
        throw OutOfRangeException(MIN_PRICE, MAX_PRICE, price);

    meal = Meal(entree, price);

    return inputStream;
}

/**
 * Overloads the stream insertion operator for the Meal class.
 * 
 * @param outputStream A reference to an ostream Object.
 * @param meal The Meal Object to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const Meal& meal)
{
    outputStream << "\nMain Course(entree): " << meal.getEntree();
    outputStream << "\nMeal Price: $" << meal.getPrice();

    return outputStream;
}
