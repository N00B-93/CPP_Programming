#include <iostream>

/**
	A school has 100 lockers and 100 students. All lockers are closed on the first day of school. As the students enter, the first student, 
	denoted S1, opens every locker. Then the second student, S2, begins with the second locker, denoted L2, and closes every other locker. 
	Student S3 begins with the third locker and changes every third locker (closes it if it was open, and opens it if it was closed). Student S4 
	begins with locker L4 and changes every fourth locker. Student S5 starts with L5 and changes every fifth locker, and so on, until student S100 
	changes L100. This is a program to determine the number of lockers open after all the students has passed through the building and changed the lockers.
*/

void flipLocker(bool lockers[], int size, int lockerNumber);  // Prototype of the flipLocker function.

int main (void)
{
	// Constant that holds the number of lockers.
	const int SIZE = 101;

	// Array to hold boolean values representing lockers.
	bool lockers[SIZE] = {false};

	// Opens or closes lockers, starting from a specifies locker number.
	for (int i = 1; i < SIZE; ++i)
		flipLocker(lockers, SIZE, i);

	// Displays the lockers that are opened after the last student has passed through the building.
	std::cout << "\nThe lockers that are opened after all students has passed are: ";
	for (int i = 1; i < SIZE; i++)
	{
		if (lockers[i])
			std::cout << "\nLocker " << i;
	}

	std::cout << "\n";
	
	return (0);
}

/**
 * Simulates the opening or closing of lockers.
 *
 * @param lockers An array of bool values representing lockers.
 * @param size The number of lockers.
 * @param lockerNumber The locker number to start the flipping from.
 */
void flipLocker(bool lockers[], int size, int lockerNumber)
{
	for (int i = lockerNumber; i < size; i = i + lockerNumber)
		lockers[i] = !lockers[i];
}

