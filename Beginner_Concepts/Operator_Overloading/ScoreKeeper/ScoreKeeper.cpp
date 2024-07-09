#include "ScoreKeeper.hpp"
#include <iostream>
#include <limits>

/**
 * No-arg constructor that initialized a new ScoreKeeper with default values.
 */
ScoreKeeper::ScoreKeeper(): courseName(""), numberOfScores(0), scores(nullptr){};

/**
 * Instantiates a new ScoreKeeper Object.
 * 
 * @param courseName The name of a course.
 * @param numberOfScores The number of different scores that a student is assigned.
 */
ScoreKeeper::ScoreKeeper(std::string courseName, int numberOfScores)
{
    this->courseName = courseName;
    this->numberOfScores = numberOfScores;
    this->scores = new int[numberOfScores];

    for (int i = 0; i < this->numberOfScores; ++i)
    {
            int score;
            bool validInput = false;

            do
            {
                std::cout << "Enter score " << (i + 1) << " (0-100): ";
                if (std::cin >> score)
                {
                    if (score >= 0 && score <= 100)
                        validInput = true;
                    else
                    {
                        std::cout << "Score must be between 0 and 100." << std::endl;
                    }
                }
                else
                {
                    std::cout << "Invalid input. Please enter a valid integer." << std::endl;
                    std::cin.clear();   // clear the error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input buffer
                }
            } while (!validInput);

            scores[i] = score;
        }
}

/**
 * Destroys the memory allocated to hold the scores of a ScoreKeeper Object.
 */
ScoreKeeper::~ScoreKeeper()
{
        delete[] scores; // Free dynamically allocated memory
}


/**
 * Overloaded = operator function.
 * 
 * @param scoreKeeper The ScoreKeeper whose values are to be copied.
 * @return A reference to a ScoreKeeper Object.
 */
const ScoreKeeper& ScoreKeeper::operator=(const ScoreKeeper& scorekeeper)
{
    if (this != &scorekeeper)
    {
        delete [] this->scores;
        this->courseName = scorekeeper.courseName;
        this->numberOfScores = scorekeeper.numberOfScores;

        scores = new int[numberOfScores];

        for (int i = 0; i < numberOfScores; ++i)
            scores[i] = scorekeeper.scores[i];
    }

    return *this;
}

/**
 * Overloaded << stream insertion operator function.
 * 
 * @param outputStream A ostream Object representing the stdout.
 * @param scoreKeeper The ScoreKeeper Object whose data fields is to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const ScoreKeeper& scoreKeeper)
{
    outputStream << "\nCourse Name: " << scoreKeeper.courseName;
    outputStream << "\nNumber of Scores: " << scoreKeeper.numberOfScores;
    outputStream << "\nScores Obtained: ";

    for (int i = 0; i < scoreKeeper.numberOfScores; ++i)
        outputStream << scoreKeeper.scores[i] << " ";
    
    outputStream << "\n";

    return outputStream;
}
