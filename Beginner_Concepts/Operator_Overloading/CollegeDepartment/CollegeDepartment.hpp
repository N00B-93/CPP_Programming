#pragma once
#include <string>
#include <istream>
#include <ostream>
#include <vector>

class CollegeDepartment
{
    // Utility functions of the CollegeDepartment class.
    public:
        CollegeDepartment();
        CollegeDepartment(std::string&, std::string&, int);
        friend std::ostream& operator<<(std::ostream&, CollegeDepartment);
        friend bool operator<(CollegeDepartment&, CollegeDepartment&);
        friend bool operator>(CollegeDepartment&, CollegeDepartment&);
        CollegeDepartment& operator=(CollegeDepartment&);
        static std::vector<CollegeDepartment> getLargestCollegeDepartment(CollegeDepartment departments[], int size);
        static std::vector<CollegeDepartment> getLowestCollegeDepartment(CollegeDepartment departments[], int size);

    // Attributes of a CollegeDepartment.
    protected:
        std::string departmentName;
        std::string HODName;
        int numberOfCourses;
        std::string* coursesOffered;
};
