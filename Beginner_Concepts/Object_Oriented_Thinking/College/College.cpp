#include "College.hpp"

Instructor::Instructor() : firstName(""), lastName(""), officeNumber(0) {}

/**
 * Instantiates a new Instructor Object.
 * 
 * @param firstName The Instructor's first name.
 * @param lastName The Instructor's last name.
 * @param officeNumber The Instructor's office number.
*/
Instructor::Instructor(std::string& firstName, std::string& lastName, int officeNumber)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->officeNumber = officeNumber;
}

/**
 * This returns the first name of an Instructor.
 * 
 * @return An Instructor's first name.
*/
std::string Instructor::getFirstName() const
{
    return this->firstName;
}

/**
 * This returns the last name of an Instructor.
 * 
 * @return An Instructor's last name.
*/
std::string Instructor::getLastName() const
{
    return this->lastName;
}

/**
 * This returns the office number of an Instructor.
 * 
 * @return An Instructor's office number.
*/
int Instructor::getOfficeNumber() const
{
    return this->officeNumber;
}

/**
 * This sets the Instructor's first name to the specified value.
 * 
 * @param firstName The Instructor's new first name.
*/
void Instructor::setFirstName(std::string& firstName)
{
    this->firstName = lastName;
}

/**
 * This sets the Instructor's last name to the specified value.
 * 
 * @param lastName The Instructor's new last name.
*/
void Instructor::setLastName(std::string& lastName)
{
    this->firstName = lastName;
}

/**
 * This sets the Instructor's office number to the specified value.
 * 
 * @param officeNumber The Instructor's new office number.
*/
void Instructor::setOfficeNumber(int officeNumber)
{
    this->officeNumber = officeNumber;
}

/**
 * This returns a string describing an Instructor Object.
 * 
 * @return A string that describes an Instructor.
*/
std::string Instructor::toString() const
{
    return "\nInstructor's First Name: " + this->getFirstName() + "\n" + "Instructor's Last Name: " + this->getLastName() + "\n" + "Instructor's Office Number: " + std::to_string(this->getOfficeNumber());
}

Classroom::Classroom() : buildingNumber(0), roomNumber(0) {}

/**
 * Instantiates a Classroom Object.
 * 
 * @param buildingNumber The Classroom's building number.
 * @param roomNumber The ClassRoom's room number in it's assigned building.
*/
Classroom::Classroom(int buildingNumber, int roomNumber)
{
    this->buildingNumber = buildingNumber;
    this->roomNumber = roomNumber;
}

/**
 * This returns the building number of a Classroom.
 * 
 * @return A Classroom's building number.
*/
int Classroom::getBuildingNumber() const
{
    return this->buildingNumber;
}

/**
 * This returns the room number of a Classroom.
 * 
 * @return A Classroom's room number.
*/
int Classroom::getRoomNumber() const
{
    return this->roomNumber;
}

/**
 * This sets the Classroom's building number to the specified value.
 * 
 * @param buildingNumber The Classroom's new building number.
*/
void Classroom::setBuildingNumber(int buildingNumber)
{
    this->buildingNumber = buildingNumber;
}

/**
 * This sets the Classroom's room number to the specified value.
 * 
 * @param buildingNumber The Classroom's new room number.
*/
void Classroom::setRoomNumber(int roomNumber)
{
    this->roomNumber = roomNumber;
}

/**
 * This returns a string describing a Classroom Object.
 * 
 * @return A string that describes a Classroom.
*/
std::string Classroom::toString() const
{
    return "\nClassroom Building Number: " + std::to_string(this->getBuildingNumber()) + "\n" + "Room Number: " + std::to_string(this->getRoomNumber());
}


/**
 * Instantiates a new CollegeCourse Object.
 * 
 * @param Instructor An Instructor teaching a CollegeCourse.
 * @param Classroom A Classroom where a CollegeCourse is being taught.
 * @param numberOfCredits The number of credits of a CollegeCourse.
*/
CollegeCourse::CollegeCourse(Instructor& instructor, Classroom& classroom, int numberOfCredits) : instructor(instructor), 
classroom(classroom), numberOfCredits(numberOfCredits){}

/**
 * This returns the number of credits obtainable in a CollegeCourse.
 * 
 * @return The number of obtainable credits.
*/
int CollegeCourse::getNumberOfCredits() const
{
    return this->numberOfCredits;
}

/**
 * This returns the Instructor teaching a particular CollegeCourse.
 *  
 * @return The Instructor teaching a particular CollegeCourse.
*/
Instructor CollegeCourse::getInstructor() const
{
    return this->instructor;
}

/**
 * This returns the Classroom where a CollegeCourse is being taught.
 * 
 * @return A Classroom where a CollegeCourse is being taught.
*/
Classroom CollegeCourse::getClassroom() const
{
    return this->classroom;
}

/**
 * This returns a string describing a CollegeCourse.
 * 
 * @return A string describing a CollegeCourse.
*/
std::string CollegeCourse::toString() const
{
    return instructor.toString() + classroom.toString() + "\nNumber Of Course credits: " + std::to_string(this->getNumberOfCredits());
}
