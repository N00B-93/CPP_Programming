#include "CollegeDepartment.hpp"
#include <iostream>

/**
 * Instantiates a new CollegeDepartment Object with default values.
 */
CollegeDepartment::CollegeDepartment(): departmentName(""), HODName(""), numberOfCourses(0), coursesOffered (nullptr){};

/**
 * Instantiates a new CollegeDepartment Object.
 * 
 * @param dName The name of the CollegeDepartment.
 * @param chairName The name of the Head of department of the CollegeDepartment.
 * @param noOfCourses The number of courses offered by a CollegeDepartment.
 */
CollegeDepartment::CollegeDepartment(std::string& dName, std::string& chairName, int noOfCourses): departmentName(dName), HODName(chairName), numberOfCourses(noOfCourses)
{
    this->coursesOffered = new std::string[this->numberOfCourses];

    for (int i = 0; i < this->numberOfCourses; ++i)
    {
        std::cout << "\nEnter the name of course " << i + 1 << ":(e.g., PHY448) ";
        std::cin >> this->coursesOffered[i];
    }
};

/**
 * Overloaded = assignment operator.
 * 
 * @param department A CollegeDepartment whose values are to be assigned to the current instance.
 * @return A reference to a CollegeDepartment.
 */
CollegeDepartment& CollegeDepartment::operator=(CollegeDepartment& department)
{
    if (this !=  &department)
    {
        delete[] this->coursesOffered;

        this->departmentName = department.departmentName;
        this->HODName = department.HODName;
        this->numberOfCourses = department.numberOfCourses;

        this->coursesOffered = new std::string[department.numberOfCourses];

        for (int i = 0; i < department.numberOfCourses; ++i)
            this->coursesOffered[i] = department.coursesOffered[i];
    }

    return *this;
}

/**
 * Overloaded << insertion operator.
 * 
 * @param outputStream A reference to an ostream Object.
 * @param department The CollegeDepartment Object to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, CollegeDepartment department)
{
    outputStream << "\nDepartment Name: " << department.departmentName;
    outputStream << "\nHOD Name: " << department.HODName;
    outputStream << "\nNumber of Courses Offered: " << department.numberOfCourses;
    outputStream << "\nCourses Offered:\n";
    for (int i = 0; i < department.numberOfCourses; ++i)
        outputStream << department.coursesOffered[i] << "\n";

    return outputStream;
}

/**
 * Overloaded < operator that determines the CollegeDepartment with the least number of courses offered out of two CollegeDepartment.
 * 
 * @param department1 The first CollegeDepartment to be compared.
 * @param department2 The second CollegeDepartment to be compared.
 * @return true if the first CollegeDepartment number of courses offered is less than the second CollegeDepartment number of courses, 
 * else false is returned.
 */
bool operator<(CollegeDepartment& department1, CollegeDepartment& department2)
{
    return department1.numberOfCourses < department2.numberOfCourses;
}

/**
 * Overloaded > operator that determines the CollegeDepartment with the most number of courses offered out of two CollegeDepartment.
 * 
 * @param department1 The first CollegeDepartment to be compared.
 * @param department2 The second CollegeDepartment to be compared.
 * @return true if the first CollegeDepartment number of courses offered is greater than the second CollegeDepartment number of courses, 
 * else false is returned.
 */
bool operator>(CollegeDepartment& department1, CollegeDepartment& department2)
{
    return department1.numberOfCourses > department2.numberOfCourses;
}

/**
 * This determines the CollegeDepartments with the highest number of courses offered.
 * 
 * @param departments An array of CollegeDepartment.
 * @param size the number of elements in the array of CollegeDepartments.
 * @return A vector containing CollegeDepartment(s) with the highest number of courses offered,
 */
std::vector<CollegeDepartment> CollegeDepartment::getLargestCollegeDepartment(CollegeDepartment departments[], int size)
{
    std::vector<CollegeDepartment> largestDepartments;

    CollegeDepartment largestDepartment = departments[0];

    for (int i = 1; i < size; ++i)
    {
        if (departments[i] > largestDepartment)
            largestDepartment = departments[i];
    }

    for (int i = 0; i < size; ++i)
    {
        if (largestDepartment.numberOfCourses == departments[i].numberOfCourses)
            largestDepartments.push_back(departments[i]);
    }

    return largestDepartments;
}

/**
 * This determines the CollegeDepartments with the lowest number of courses offered.
 * 
 * @param departments An array of CollegeDepartment.
 * @param size the number of elements in the array of CollegeDepartments.
 * @return A vector containing CollegeDepartment(s) with the lowest number of courses offered,
 */
std::vector<CollegeDepartment> CollegeDepartment::getLowestCollegeDepartment(CollegeDepartment departments[], int size)
{
    std::vector<CollegeDepartment> lowestDepartments;

    CollegeDepartment lowestDepartment = departments[0];

    for (int i = 1; i < size; ++i)
    {
        if (departments[i] < lowestDepartment)
            lowestDepartment = departments[i];
    }

    for (int i = 0; i < size; ++i)
    {
        if (lowestDepartment.numberOfCourses == departments[i].numberOfCourses)
            lowestDepartments.push_back(departments[i]);
    }

    return lowestDepartments;
}

/**
 * Destroys the allocated memory used to store the courses offered in a CollegeDepartment.
 */
CollegeDepartment::~CollegeDepartment()
{
    delete[] this->coursesOffered;
}