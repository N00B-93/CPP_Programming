#include "StudentsAndCourses.hpp"
#include <iostream>

void printStudent(Student* student)
{
	std::cout << "\nStudent Name: " << student->studentName << "\n";

	if (student->courses.empty())
	{
		std::cout << "\n'" << student->studentName << "' is not offering any course.\n";
		return;
	}
	std::cout << "\nCourses Offered by '" << student->studentName << "':\n";
	for (Course *course: student->courses)
		std::cout << course->courseName << "\n";
}

void printCourse(Course* course)
{
	std::cout << "\nCourse Name: " << course->courseName << "\n";

	if (course->students.empty())
	{
		std::cout << "\nNo student is offerring " << course->courseName << "\n";
		return;
	}

	std::cout << "\nNames of Students offerring '" << course->courseName << "':\n";
	for (Student *student: course->students)
		std::cout << student->studentName << "\n";
}

void enroll(Student* student, Course* course)
{
    // Check if a course with the same name is already enrolled
    for (Course* enrolledCourse : student->courses)
    {
        if (enrolledCourse->courseName == course->courseName)
	{
            std::cout << "\n" << student->studentName << " already enrolled to "
                      << course->courseName << "\n";
            return;
        }
    }

    student->courses.push_back(course);
    course->students.push_back(student);
}


