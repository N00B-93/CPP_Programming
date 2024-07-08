#pragma once
#include <istream>
#include <ostream>

class SoccerPlayer
{   
    // Utility functions of the SoccerPlayer class.
    public:
        SoccerPlayer();
        SoccerPlayer(int, int, int);
        friend std::istream& operator>>(std::istream&, SoccerPlayer&);
        friend std::ostream& operator<<(std::ostream&, const SoccerPlayer&);
        friend bool operator>(const SoccerPlayer&, const SoccerPlayer&);
        int getGoals() const;
        int getAssists() const;
        int getJerseyNumber() const;
    
    //  Attributes of a SoccerPlayer.
    private:
        int jerseyNumber;
        int goals;
        int assists;
};
