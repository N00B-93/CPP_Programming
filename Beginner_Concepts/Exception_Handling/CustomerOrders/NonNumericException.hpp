#pragma once
#include <stdexcept>

class NonNumericException: public std::runtime_error
{   public:
        NonNumericException(std::string message): std::runtime_error(message){};
};
