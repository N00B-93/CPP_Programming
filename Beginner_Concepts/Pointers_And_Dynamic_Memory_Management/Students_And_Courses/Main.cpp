#include "StudentsAndCourses.hpp"
#include <iostream>

/**
	This is a driver program to test the functionalities of the Student and Course structs.
*/

int main(int argc, char* const argv[])
{

  // Create some students
  Student student1;
  student1.studentName = "Alice";
  Student student2;
  student2.studentName = "Bob";
  Student student3;
  student3.studentName = "Charlie";

  // Create some courses
  Course course1;
  course1.courseName = "Math";
  Course course2;
  course2.courseName = "English";
  Course course3;
  course3.courseName = "History";

  // Test printStudent with empty course list
  std::cout << "\n**Testing printStudent with empty course list:**\n";
  printStudent(&student1);

  // Enroll students in courses
  enroll(&student1, &course1);
  enroll(&student1, &course2);
  enroll(&student2, &course2);
  enroll(&student3, &course3);

  // Test printStudent after enrollment
  std::cout << "\n**Testing printStudent after enrollment:**\n";
  printStudent(&student1);
  printStudent(&student2);
  printStudent(&student3);

  // Test printCourse with empty student list
  std::cout << "\n**Testing printCourse with empty student list (new course):**\n";
  Course newCourse;
  newCourse.courseName = "Science";
  printCourse(&newCourse);

  // Test printCourse after enrollment
  std::cout << "\n**Testing printCourse after enrollment:**\n";
  printCourse(&course1);
  printCourse(&course2);
  printCourse(&course3);

  // Test edge case: enrolling student in same course twice
  std::cout << "\n**Testing enrolling student in same course twice:**\n";
  enroll(&student1, &course1);
  printStudent(&student1);  // Should not show duplicate course

  return (0);
}

