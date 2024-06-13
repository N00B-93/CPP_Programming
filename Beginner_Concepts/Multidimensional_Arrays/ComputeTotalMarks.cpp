#include <iostream>

/**
    The marks of 8 students in 5 test are given below:

                 T1  T2   T3  T4  T5
    student 0    12, 14, 13, 14, 15
    student 1    17, 13, 14, 13, 13
    student 2    13, 13, 14, 13, 13
    student 3    19, 13, 14, 17, 13
    student 4    13, 15, 14, 13, 16
    student 5    13, 14, 14, 16, 13
    student 6    13, 17, 14, 18, 13
    student 7    16, 13, 15, 19, 12

    This is a program that calculates the total mark of each student and displays the student numbers and total marks
    in descending order.
*/

const int COLUMNS = 5;  // Constant representing the number of columns.

/**
 * Sums the row of a 2_Dimensional array of marks and appends each sum to another array holding the total scores.
 * 
 * @param marks A 2-D array of integers representing marks.
 * @param totalMarks A 1-D array to hold the total sum of each row.
 * @param size The number of rows in the 2-D array.
*/
void sumOfRows(const int marks[][COLUMNS], int totalMarks[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        int sum = 0;
        for (int j = 0; j < COLUMNS; ++j)
            sum += marks[i][j];
        totalMarks[i] = sum;
    }
}

/**
 * Swaps two integers.
 *
 * @param number1 The first number to be swapped.
 * @param number2 The second number to be swapped.
 */
void swap(int& number1, int& number2)
{
	int temp = number1;
	number1 = number2;
	number2 = temp;

	return;
}

/**
 * Sorts an array of integers scores using the bubble sort algorithm.
 *
 * @param array The array of scores whose elements is to be sorted.
 * @param studentNumber An array containing the students numbers.
 * @param size The number of elements in the array.
 */
void sortScores(int totalScore[], int studentNumber[], int size)
{
	bool changed = true;

	do
	{
		changed = false;

		for (int j = 0; j < size - 1; ++j)
		{
			if (totalScore[j] < totalScore[j + 1])
			{
				swap(totalScore[j], totalScore[j + 1]);
                swap(studentNumber[j], studentNumber[j + 1]);
				changed = true;
			}
		}
	} while (changed);
}

/**
 * Displays the arrays containing the students total marks and their respective numbers..
 *
 * @param totalMarks The array containing the students total marks.
 * @param studentNumber The array containing the students numbers.
 * @param size The number of elements in an array.
 */
void displayMarksAndStudentNumber(const int totalMarks[], int studentNumber[], const int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << "\nStudent " << studentNumber[i] << "'s mark is: " << totalMarks[i] << "\n";
	std::cout << "\n";
}


int main(int argc, char* const argv[])
{
    // Constant representing the number of rows.
    const int ROWS = 8;

    // 2-D Array representing students marks.
    int marks[][COLUMNS] =
    {
        {12, 14, 13, 14, 15},
        {17, 13, 14, 13, 13},
        {13, 13, 14, 13, 13},
        {19, 13, 14, 17, 13},
        {13, 15, 14, 13, 16},
        {13, 14, 14, 16, 13},
        {13, 17, 14, 18, 13},
        {16, 13, 15, 19, 12}
    };

    // Arrays representing each student total mark and student number.
    int totalMarks[ROWS] = {0}, studentNumber[] = {1, 2, 3, 4, 5, 6, 7 ,8};

    // Determines the total mark of each student.
    sumOfRows(marks, totalMarks, ROWS);

    // Sorts the scores in descending order.
    sortScores(totalMarks, studentNumber, ROWS);

    // Displays the students numbers and their respective total marks.
    std::cout << "\nThe students marks are as folows:\n";
    displayMarksAndStudentNumber(totalMarks, studentNumber, ROWS);
    
    return (0);
}
