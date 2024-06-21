#pragma once
#include <vector>
#include <string>

struct Course;  // Forward declaration of the Course struct.

// A struct representing a Student.
struct Student
{
	std::string studentName;
	std::vector<Course*> courses;
};

// A struct representing a Course.
struct Course
{
	std::string courseName;
	std::vector<Student*> students;
};

/**
 * Displays a Student name and a list of all courses offerred by the Student.
 *
 * @param student A pointer to a Student struct.
 */
void printStudent(Student* student);

/**
 * Displays a Course name and a list of all students offering the Course.
 *
 * @param course A pointer to a Course struct.
 */
void printCourse(Course* course);

/*
 * This enrolls the specified Student to the Specified course.
 *
 * @param student A Student to be enrolled to a Course.
 * @param course A Course that a Student is to be enrolled to.
 */
void enroll(Student* student, Course* course);

