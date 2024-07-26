#include "Job.hpp"
#include "JobException.hpp"
#include <iostream>

int main(int argc, char* const argv[])
{
	// Constant to hold the size of the array of job Objects.
	const int numberOfJobs = 4;
	
	// Creates an array of Job Objects.
	Job jobs[numberOfJobs];

	for (int i = 0; i < numberOfJobs; i++) 
	{
		try
		{
			// Reads in Job Objects.
			std::cin >> jobs[i];
		}
		catch (JobException& jobException)
		{
			std::cerr << jobException.what() << std::endl;
			i--;
        	}
		catch (std::runtime_error& runtimeError)
		{
			std::cout << "\n" << runtimeError.what();
		}
    	}
	
	// Displays all the Job Objects in the array of Jobs.
	std::cout << "\n\t\tJob information\n";
	for (int i = 0; i < numberOfJobs; i++)
	    std::cout << jobs[i];

	return (0);
}

