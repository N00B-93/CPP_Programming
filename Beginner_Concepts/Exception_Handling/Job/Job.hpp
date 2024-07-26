#ifndef JOB_HPP
#define JOB_HPP

#include <ostream>
#include <istream>
#include <stdexcept>

class Job
{
	// Utility functions of the Job class.
	public:
		Job();
		Job(int, double);
		friend std::ostream& operator<<(std::ostream&, const Job&);
		friend std::istream& operator>>(std::istream&, Job&);
		int getJobID() const;
		double getJobCost() const;
		void setJobID(const int jobID);
		void setJobCost(const double jobCost);
	
	// Attributes of a Job.
	private:
		int jobID;
		double jobCost;
};

#endif /* JOB_HPP */

