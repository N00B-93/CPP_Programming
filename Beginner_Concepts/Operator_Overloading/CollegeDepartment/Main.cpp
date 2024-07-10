#include "CollegeDepartment.hpp"
#include <iostream>
#include <limits>

int main(int argc, char const *argv[])
{
    // Variable to hold the size of the array of CollegeDepartment Objects.
    const int SIZE = 4;

    // An array of CollegeDepartment Objects
    CollegeDepartment departments[SIZE];
    
    std::string departmentName, hodName;
    int numberOfCourses;

    for (int i = 0; i < SIZE; ++i)
    {
        // Reads in the name of a CollegeDepartment.
        std::cout << "\nEnter the name of department " << i + 1 << ": ";
        getline(std::cin, departmentName);

        // Reads in the name of the HOD of a CollegeDepartment.
        std::cout << "\nEnter the name of the HOD of department " << i + 1 << ": ";
        getline(std::cin, hodName);

        while (true)
        {
            // Reads in the number of courses offered in a CollegeDepartment.
            std::cout << "\nEnter the number of courses offered in department " << i + 1 << ": ";
            std::cin >> numberOfCourses;

            if (std::cin.fail() || numberOfCourses < 1)
            {
                std::cin.clear();  // Clears the error state of std::cin.
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nError: Number of courses offered must be > 0, Try again.\n";
            }
            else
                break;  // Breaks out of the infinite if the number of courses entered is valid.
        }

        // Creates a CollegeDepartment Object.
        CollegeDepartment department(departmentName, hodName, numberOfCourses);

        // Adds the created Department Object to the list of CollegeDepartments.
        departments[i] = department;

        getline(std::cin, departmentName);  // Consumes the newline character in the stdin.
    }

    // Displays all the CollegeDepartment in the array.
    std::cout << "\n\t\tDepartments Details.";
    for (int i = 0; i < SIZE; ++i)
        std::cout << departments[i];

    // Tests the overloaded = operator function.
    CollegeDepartment newDepartment = departments[0];

    // Displays the new CollegeDepartment Object.
    std::cout << "\nUsing the overloaded operator, newDepartment's data field are:";
    std::cout << newDepartment;

    // Displays the CollegeDepartment with the highest number of courses offered.
    std::cout << "\nThe CollegeDepartment with the highest number of Courses offered are:\n";
    std::vector<CollegeDepartment> largestDepartments = CollegeDepartment::getLargestCollegeDepartment(departments, SIZE);
    for (CollegeDepartment department: largestDepartments)
        std::cout << department;

    // Displays the CollegeDepartment with the lowest number of courses offered.
    std::cout << "\nThe CollegeDepartment with the lowest number of Courses offered are:\n";
    std::vector<CollegeDepartment> lowestDepartments = CollegeDepartment::getLowestCollegeDepartment(departments, SIZE);
    for (CollegeDepartment department: lowestDepartments)
        std::cout << department;

    return (0);
}
