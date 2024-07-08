#include "JobBid.hpp"
#include <iostream>

/**
 * No-arg constructor that set the fields of a JobBid Object to default values.
 */
JobBid::JobBid(): bidNumber(0), quotedPrice(0.0){};

/**
 * Instantiates a new JobBid Object.
 * 
 * @param bidNumber The bid number for a JobBid.
 * @param quotedPrice The quoted price for a job.
 */
JobBid::JobBid(int bidNum, double qPrice): bidNumber(bidNum), quotedPrice(qPrice){};

/**
 * The overloaded stream insertion operator function.
 * 
 * @param outputStream An ostream Object representing the output stream.
 * @param jobBid The JobBid Object whose information is to be displayed.
 * @return A reference to output stream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const JobBid& jobBid)
{
    outputStream << "\nBid Number: " << jobBid.getBidNumber()
                 << "\nQuoted Price: $" << jobBid.getQuotedPrice() << "\n";
    
    return outputStream;
}

/**
 * The overloaded stream extraction operator function.
 * 
 * @param inputStream An istream Object representing the input stream.
 * @param jobBid A JobBid Object whose details is to be read from the user.
 * @return A reference to input stream Object.
 */
std::istream& operator>>(std::istream& inputStream, JobBid& jobBid)
{
    std::cout << "\nEnter 3-digit bid number: ";
    inputStream >> jobBid.bidNumber;

    if (inputStream.fail() || jobBid.bidNumber < 100 || jobBid.bidNumber > 999)
        return inputStream;
    
    std::cout << "\nEnter the quoted price for the job: $";
    inputStream >> jobBid.quotedPrice;

    if (inputStream.fail() || jobBid.quotedPrice < 0)
        return inputStream;

    return inputStream;
}

/**
 * Overloaded > operator function for comparing two JobBids based on their quoted price.
 * 
 * @param another A JobBid Object whose quoted price is to be compared with the current instance.
 * @return true if the current instance quoted price is greater than a specified JobBid Object's quoted price, else false.
 */
bool operator>(const JobBid& jobBid1, const JobBid& jobBid2)
{
    return jobBid1.getQuotedPrice() > jobBid2.getQuotedPrice();
}

/**
 * This returns the bid number for a JobBid.
 * 
 * @return A JobBid's bid number.
 */
int JobBid::getBidNumber() const
{
    return this->bidNumber;
}

/**
 * This returns the quoted price for a Job.
 * 
 * @return A Job's quoted price.
 */
double JobBid::getQuotedPrice() const
{
    return this->quotedPrice;
}
