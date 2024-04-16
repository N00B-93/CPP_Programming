#include <stdio.h>

/**
	This is a program that prompts the user to enter the size of an hard
	drive specified by the manufacturer and then displays the actual storage capacity of th hard drive.
*/

int main(void)
{
	// Initializes a variable to hold the size of the hard drive.
	float hardDriveSize(0);

	// Prompts the user to enter the size of the hard drive.
	printf("\nEnter the size of the hard drive in GB: ");
	scanf("%f", &hardDriveSize);
	
	// Converts the manufacturers size from GB to bytes.
	double bytesInHardDrive = hardDriveSize * 1000 * 1000 * 1000;
	
	// Calculates the actual bytes in the hard disk using 1KB = 1024 bytes.
	double actualStorage = bytesInHardDrive / (1024 * 1024 * 1024);

	// Dislays the result.
	printf("\nThe actual storage capacity of the hard drive is: %.2f GB\n", actualStorage);

	return (0);
}

