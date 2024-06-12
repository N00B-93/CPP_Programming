#pragma once
#include <string>

/**
 * The type Instructor.
 */
class Instructor
{
	public:
		Instructor();
		Instructor(std::string&, std::string&, int);  // Parameterized constructor prototype.
		std::string getFirstName() const;  // Prototype of the getFirstName function.
		std::string getLastName() const;  // Prototype of the getLastName function.
		int getOfficeNumber() const;  // Prototype of the getOfficeNumber function.
		void setFirstName(std::string&);  // Prototype of the setFirstName function.
		void setLastName(std::string&);  // Prototype of the setLastName.
		void setOfficeNumber(int);  // Prototype of the setOfficeNumber function.
		std::string toString() const;  // Prototype of the toString function.
		
	// Attributes of an Instructor.
	private:
		std::string firstName;
		std::string lastName;
		int officeNumber;
};

/**
 * The type Classroom.
 */
class Classroom
{
	public:
		Classroom();
		Classroom(int, int);  // Parameterized constructor prototype.
		int getBuildingNumber() const;  // Prototype of the getBuildingNumber function.
		int getRoomNumber() const;  // Prototype of the getRoomNumber function.
		void setBuildingNumber(int);  // Prototype of the setBuilding number function.
		void setRoomNumber(int);  // Prototype of the setRoomNumber function.
		std::string toString() const;  // Prototype of the toString function.
	
		// Attributes of a Classroom.
		private:
		int buildingNumber;
		int roomNumber;
};

/**
 * The type CollegeCourse
 */
class CollegeCourse
{
	public:
		CollegeCourse(Instructor&, Classroom&, int);  // Parameterized constructor.
		Instructor getInstructor() const;  // Prototype of the getInstructor function.
		Classroom getClassroom() const;  // Prototype of the getClassroom function.
		int getNumberOfCredits() const;  // Prototype of the getNumberOfCredits function.
		std::string toString() const;  // Prototype of the toString function.

	// Attributes of a CollegeCourse.
	private:
		Instructor instructor;
		Classroom classroom;
		int numberOfCredits;
};
