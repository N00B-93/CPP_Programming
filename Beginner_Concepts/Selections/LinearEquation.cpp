#include <iostream>
#include <iomanip>

using namespace std;

/**
	This is a program that prompts the user to enter the coefficients of a system of the 2x2 linear equations;
			ax + by = e
			cx + dy = f
	and then displays the values of x and y if the system of equations can be solved, or informs the user that the equation has no real roots if it 
	cant be solved.
*/

int main(void)
{
	// Initializes variables to hold the coefficients of the equations.
	float a, b, c, d, e, f;

	cout << "\t\tax + by = e\n"
	     << "\t\tbx + dy = f\n";

	// Prompts the user to enter the coefficients of the first equation.
	cout << "\nEnter the coefficient of a, b and e: ";
	cin >> a >> b >> e;

	// Prompts the user to enter the coefficients of the second equation.
	cout << "\nEnter the coefficient of c, d and f: ";
	cin >> c >> d >> f;

	// Determines if the equation is solvable or not.
	bool isSolvable = (a * d - b * c) != 0 ? true : false;
	
	// Exits the program if the system of equation has no solution.
	if (!isSolvable)
	{
		cout << "\nThe system of equation has no solution.";
		return (1);
	}

	// Solves for x and y.
	float x = (e * d - b * f) / (a * d - b * c);
	float y = (a * f - e * c) / (a * d - b * c);

	// Displays the solution of the equation.
	cout << fixed << showpoint << setprecision(2);
	cout << "\nx = " << x
	     << "\ny = " << y << endl;

	return (0);
}

