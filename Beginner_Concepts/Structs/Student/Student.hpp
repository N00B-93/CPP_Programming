#pragma once
#include <string>
#include <vector>

// Struct representing a student.
struct student
{
    std::string studentFirstName;
    std::string studentLastName;
    int testScore;
    char grade;
};

char getGrade(int score);  // Prototype of the getGrade function.
int getHighestScore(std::vector<student> students);  // Prototype of the getStudentWithHighestScore function;
void displayStudents(std::vector<student> students);  // Prototype of the displayStudents function.
