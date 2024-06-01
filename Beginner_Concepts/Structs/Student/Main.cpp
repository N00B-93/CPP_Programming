#include <limits>
#include <iostream>
#include "Student.hpp"

/**
    This is a program that creates a vector of student struct, continuously prompts the user to enter the names and 
    the test scores of students and then adds them to the vector of student.
    After which each student's first name, last name, test score and grades is then displayed. The student(s) with
    the highest score is also displayed.
*/

int main(int argc, char const *argv[])
{
    // A vector to hold students.
    std::vector<student> students;

    // A student type.
    student myStudent;

    // Continuously prompts the user to enter the names of students and their scores.
    while (true)
    {
        // Prompts the user to enter the student's first name.
        std::cout << "\nEnter the student's first name: ";
        std::cin >> myStudent.studentFirstName;

        // Prompts the user to enter the student's last name.
        std::cout << "\nEnter the student's last name: ";
        std::cin >> myStudent.studentLastName;

        // Prompts the user to enter the student's test score.
        std::cout << "\nEnter the student's test score: ";
        std::cin >> myStudent.testScore;

        // Displays an error message and clears the stdin if the user's input is invalid.
        if (std::cin.fail() || myStudent.testScore <= 0 || myStudent.testScore > 100)
        {
            std::cerr << "\nError: Test scores should be > 0 and <= 100, Try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        // Assigns a grade based on the score.
        myStudent.grade = getGrade(myStudent.testScore);

        // Adds the student to the students vector.
        students.push_back(myStudent);

        // Asks the user if he/she wants to continue.
        char choice;
        std::cout << "\nWould you like to continue('y', 'n')? ";
        std::cin >> choice;

        if (choice == 'y')
            continue;
        else
            break;
    }
    
    // Displays the students information.
    displayStudents(students);

    // Determines the maximum score.
    int highestScore = getHighestScore(students);

    // Displays the student(s) with the highest score.
    std::cout << "\nThe student(s) with highest score:";
    for (student s: students)
    {
        if (s.testScore == highestScore)
            std::cout << "\n" << (s.studentLastName + ", " + s.studentFirstName);
    }

    return (0);
}
