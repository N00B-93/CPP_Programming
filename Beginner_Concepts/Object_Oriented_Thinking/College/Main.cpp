#include <iostream>
#include <limits>
#include <vector>
#include "College.hpp"

int main()
{
    std::vector<CollegeCourse> courses;
    char addMore;

    do
    {
        // Get input for Instructor
        std::string firstName;
        std::string lastName;
        int officeNumber;

        std::cout << "\n\nEnter the Instructor's first name: ";
        std::cin >> firstName;

        std::cout << "\nEnter the Instructor's last name: ";
        std::cin >> lastName;

        while (true)
        {
            std::cout << "\nEnter a 3-digit Instructor's office number: ";
            std::cin >> officeNumber;
            if (std::cin.fail() || officeNumber < 100 || officeNumber > 999)
            {
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
                std::cout << "\nInvalid input. Use a 3-digit office number." << std::endl;
            }
            else
                break;
        }

        // Create Instructor object
        Instructor instructor(firstName, lastName, officeNumber);

        // Get input for Classroom
        int buildingNumber;
        int roomNumber;

        while (true)
        {
            std::cout << "\nEnter a 3-digit Classroom building number: ";
            std::cin >> buildingNumber;
            if (std::cin.fail() || buildingNumber < 100 || buildingNumber > 999)
            {
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
                std::cout << "\nInvalid input. Use a 3-digit building number." << std::endl;
            }
            else
                break;
        }

        while (true)
        {
            std::cout << "\nEnter a 2-digit room number: ";
            std::cin >> roomNumber;
            if (std::cin.fail() || roomNumber <= 0 || roomNumber > 99)
            {
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
                std::cout << "\nInvalid input. Use a 2-digit room number." << std::endl;
            }
            else
                break;
        }

        // Create Classroom object
        Classroom classroom(buildingNumber, roomNumber);

        // Get input for CollegeCourse
        int numberOfCredits;

        while (true)
        {
            std::cout << "\nEnter the number of credits for the CollegeCourse: ";
            std::cin >> numberOfCredits;
            if (std::cin.fail() || numberOfCredits < 12 || numberOfCredits > 120)
            {
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
                std::cout << "\nInvalid input. Number of credits should be at least 12 and at most 120." << std::endl;
            }
            else
                break;
            
        }

        // Create CollegeCourse object
        CollegeCourse course(instructor, classroom, numberOfCredits);

        courses.push_back(course);

        std::cout << "\nDo you want to add another course? (y/n): ";
        std::cin >> addMore;

    } while (addMore == 'y' || addMore == 'Y');

    // Display the created objects.
    std::cout << "\n\t\tCourses Information.\n";
    for (size_t i = 0; i < courses.size(); ++i)
    {
        std::cout << courses[i].toString();
        std::cout << "\n";
    }

    return 0;
}
