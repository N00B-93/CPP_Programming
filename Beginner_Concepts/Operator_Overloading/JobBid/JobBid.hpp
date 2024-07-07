#pragma once
#include <istream>
#include <ostream>

class JobBid
{
    // Utility functions of the JobBid class.
    public:
        JobBid();
        JobBid(int, double);
        friend std::ostream& operator<<(std::ostream&, const JobBid&);
        friend std::istream& operator>>(std::istream&, JobBid&);
        friend bool operator>(const JobBid&, const JobBid&);
        int getBidNumber() const;
        double getQuotedPrice() const;

    // Attributes of a JobBid.
    private:
        int bidNumber;
        double quotedPrice;
};
