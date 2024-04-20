#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

/**
	This is a program that reads in the following information and prints a payroll statement.
	Employee’s name (e.g., Smith)
	Number of hours worked in a week (e.g., 10)
	Hourly pay rate (e.g., 9.75)
	Federal tax withholding rate (e.g., 20%)
	State tax withholding rate (e.g., 9%)
*/

int main(void)
{
	// Creates a variable to store the employee name.
	string employeeName = "";

	// Declares variable to hold Number of hours worked in a week, Hourly pay rate
	// Federal tax withholding rate and State tax withholding rate.
	float hoursWorkedInAWeek, hourlyPayRate, federalTaxWitholdingRate, stateTaxWitholdingRate;

	// Reads in the employee's name.
	cout << "\nEnter employee's name: ";
	getline(cin, employeeName);

	// Reads in the number of hours worked in a week.
	cout << "\nEnter number of hours worked in a week: ";
	cin >> hoursWorkedInAWeek;

	// Displays an error message and terminates the program if the user enters a negative number of hours.
	if (hoursWorkedInAWeek < 0)
	{
		cout << "\nError: Number of hours worked should be non-negative.\n";
		return (1);
	}

	// Reads in the hourly pay rate.
	cout << "\nEnter the hourly pay rate: € ";
	cin >> hourlyPayRate;

	// Displays an error message and terminates the program if the user enters a negative hourly pay rate.
	if (hourlyPayRate < 0)
	{
		cout << "\nError: Hourly pay rate should be non-negative.\n";
		return (2);
	}

	// Reads in the federal tax witholding rate. 
	cout << "\nEnter the federal tax witholding rate(e.g., 9%): ";
	cin >> federalTaxWitholdingRate;

	// Displays an error message and terminates the program if the user enters a negative federal tax witholding rate.
	if (federalTaxWitholdingRate < 0 or federalTaxWitholdingRate > 100)
	{
		cout << "\nError: Federal tax witholding rate should be non-negative and < 100 %.\n";
		return (3);
	}

	// Reads in the state tax witholding rate.
	cout << "\nEnter the state tax witholding rate(e.g., 20%): ";
	cin >> stateTaxWitholdingRate;

	// Displays an error message and terminates the program if the user enters a negative state tax witholding rate.
	if (stateTaxWitholdingRate < 0 or stateTaxWitholdingRate > 100)
	{
		cout << "\nError: State tax witholding rate should be non-negative and < 100.\n";
		return (4);
	}

	// Calculate the employee's gross pay.
	float grossPay = hoursWorkedInAWeek * hourlyPayRate;

	// Calculates the federal and state witholdings.
	float federalWitholdings = (federalTaxWitholdingRate / 100) * grossPay;
	float stateWitholdings = (stateTaxWitholdingRate / 100) * grossPay;

	// Calculate the total deductions.
	float totalDeductions = federalWitholdings + stateWitholdings;

	// Calculates the net pay.
	float netPay = grossPay - totalDeductions;

	// Displays the employees payroll statement.
	cout << setprecision(4);
	cout << "\nEmployee Name: " << employeeName;
	cout << "\nHours Worked: " << hoursWorkedInAWeek;
	cout << "\nPay Rate: € " << hourlyPayRate;
	cout << "\nGross Pay: € " << grossPay;
	cout << "\nDeductions:\n";
	cout << setw(26) << right << "Federal Witholdings: €" << federalWitholdings;
	cout << "\n" << setw(24) << right << "State Witholdings: €" << stateWitholdings;
	cout << "\n" << setw(23) << right << "Total Deductions: €" << totalDeductions;
	cout << "\nNet Pay: €" << netPay;
	cout << "\n";

	return (0);
}
