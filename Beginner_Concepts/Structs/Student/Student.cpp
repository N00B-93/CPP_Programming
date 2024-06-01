#include "Student.hpp"
#include <iomanip>
#include <iostream>

/**
 * This determines the maximum test score and adds all the students that has this score to a vector.
 * 
 * @param students A vector of students.
 * @return The highest score.
*/
int getHighestScore(std::vector<student> students)
{
    int maximumScore = students[0].testScore;

    for (student s: students)
    {
        if (s.testScore > maximumScore)
              maximumScore = s.testScore;
    }

    return maximumScore;
}

/**
  * Returns the corresponding grade for a given score.
  *
  * @param score The score whose grade equivalent is required.
  * @return The grade that represents the score.
  */
char getGrade(int score)
{
	if (score >= 70 && score <= 100)
		return 'A';
	else if (score >= 60 && score <= 69)
		return 'B';
	else if (score >= 50 && score <= 59)
		return 'C';
	else if (score>= 45 && score <= 49)
		return 'D';
	return 'F';
}

/**
 * Displays students information.
 * 
 * @param students A vector of students whose information is to be displayed.
*/
void displayStudents(std::vector<student> students)
{
    std::cout << "\n\t\tStudents Names, Test Scores, and Grades.\n";
    std::cout << std::left << std::setw(30) << "\nNames" << std::setw(10) << "Scores" << "Grade\n";
    std::cout << "-----------------------------------------------------------\n";
    for (const student& s : students)
    {
        std::cout << std::left << std::setw(33) << (s.studentLastName + ", " + s.studentFirstName)
                  << std::setw(10) << s.testScore
                  << std::setw(4) << s.grade << "\n";
    }
}
