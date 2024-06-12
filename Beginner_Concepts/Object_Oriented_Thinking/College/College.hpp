#pragma once
#include <string>

/**
 * The type Instructor.
 */
class Instructor
{
	public:
		Instructor(std::string&, std::string&, int);  // Parameterized constructor prototype.
		std::string getFirstName() const;  // Prototype of the getFirstName function.
		std::string getLastName() const;  // Prototype of the getLastName function.
		void setFirstName(std::string& firstName);  // Prototype of the setFirstName function.
		void setLastName(std::string& LastName);  // Prototype of the setLastName.
		int getOfficeNumber() const;  // Prototype of the getOfficeNumber function.
		void setOfficeNumber(int& officeNumber);  // Prototype of the setOfficeNumber function.

		void toString() const;  // Prototype of the toString function.
		
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
		Classroom(int&, int&);  // Parameterized constructor prototype.
		int getBuildingNumber() const;  // Prototype of the getBuildingNumber function.
		int getRoomNumber() const;  // Prototype of the getRoomNumber function.
		void setBuildingNumber(int&)  // Prototype of the setBuilding number function.
		void setRoomNumber(int&);  // Prototype of the setRoomNumber function.
		void toString()  // Prototype of the toString function.
	
	// Attributes of a Classroom.
	private:
		int buildingNumber;
		int roomNumber;
}

/**
 * The type CollegeCourse
 */
class CollegeCourse
{

