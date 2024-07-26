#ifndef JOBEXCEPTION_HPP
#define JOBEXCEPTION_HPP

#include <stdexcept>
#include "Job.hpp"
#include <string>

class JobException: public std::runtime_error
{
	// Utility functions of the JobException class.
	public:
		JobException(Job&, std::string);
		virtual const char* what() const _NOEXCEPT;
	
	// Attributes of a JobException.
	protected:
		Job job;
		std::string message;
};

#endif /* JOBEXCEPTION_HPP */

