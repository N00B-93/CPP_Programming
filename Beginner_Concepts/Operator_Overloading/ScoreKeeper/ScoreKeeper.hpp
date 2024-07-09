#pragma once
#include <string>
#include <istream>

class ScoreKeeper
{
    //  Utility functions of the ScoreKeeper class.
    public:
        ScoreKeeper();
        ScoreKeeper(std::string, int);
        ~ScoreKeeper();
        friend std::ostream& operator<<(std::ostream&, const ScoreKeeper&);
        const ScoreKeeper& operator=(const ScoreKeeper&);

    //  Attributes of a ScoreKeeper.
    private:
        std::string courseName;
        int numberOfScores;
        int* scores;
};
