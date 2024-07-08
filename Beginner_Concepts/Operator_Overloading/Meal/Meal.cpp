#include "Meal.hpp"
#include <iostream>

/**
 * No-arg constructor
 */
Meal::Meal(): mainCourse(""), calorieCount(0){};

/**
 * Instantiates a new Meal Object.
 * 
 * @param entree The main course of the Meal.
 * @param calories The number of calories in the Meal.
 */
Meal::Meal(std::string entree, int calories): mainCourse(entree), calorieCount(calories){};

/**
 * Overloaded + function that determines the sum of calories in two Meal Object.
 * 
 * @param meal1 The first Meal Object.
 * @param meal2 The second Meal Object.
 * @return A Meal Object whose main course is "Daily Total" and whose calorie count is the sum of the calorie count of two
 * Meal Objects.
 */
Meal operator+(const Meal& meal1, const Meal& meal2)
{
    Meal tempMeal;

    tempMeal.mainCourse = "Daily Total";
    tempMeal.calorieCount = meal1.calorieCount + meal2.calorieCount;

    return tempMeal;
}

/**
 * Overloaded stream extraction operator function.
 * 
 * @param An istream Object representing stdin.
 * @param meal A Meal Object whose data fields are to be populated with the values received from the user.
 * @return An istream Object reference.
 */
std::istream& operator>>(std::istream& inputStream, Meal& meal)
{
    std::cout << "\nEnter the name of the main course: ";
    getline(inputStream, meal.mainCourse);

    std::cout << "\nEnter the number of calories in " << meal.mainCourse << " :";
    inputStream >> meal.calorieCount;

    if (std::cin.fail() || meal.calorieCount < 0)
        return inputStream;
    
    return inputStream;
}

/**
 * Overloaded the << stream insertion operator function.
 * 
 * @param outputStream An ostream Object representing stdout.
 * @param meal The Meal Object to be displayed.
 * @return A ostream Object reference.
 */
std::ostream& operator<<(std::ostream& outputStream, const Meal& meal)
{
    outputStream << "\nMain Course: " << meal.mainCourse;
    outputStream << "\nNumber of Calories: " << meal.calorieCount << "\n";

    return outputStream;
}
