#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

/**
	This is a program that creates a struct named MovieData, creates two MovieData item, initializes each 
	MovieData type's members with values and then displays information about each MovieData item.
*/

// The struct MovieData.
struct MovieData
{
	std::string title;  // Movie title.
	std::string director;  // Movie director's name.
	int yearReleased;  // Year movie was released.
	double movieCost;  // Cost of producing a movie.
	double firstYearRevenue;  // Revenue gained after first year of movie production.
	int runningTime;  // Running time in minutes.
};

void displayMovieData(const MovieData& movieData);  // Prototype of the displayMovieData function.

int main(int argc, char* const argv[])
{
	// Creates two MovieData structs.
	MovieData movieData1 = {"Rumble in the Bronx", "Zack Snyder", 2002, 45'575'500.64, 121'646'821.90, 122};
	MovieData movieData2 = {"Kraven the Hunter", "Steven Spilberg", 2024, 85'901'212.60, 357'021'112.75, 125};
	
	// Displays information about each MovieData struct.
	std::cout << "\n\t\tMovie Information\n";
	displayMovieData(movieData1);
	displayMovieData(movieData2);

	return (0);
}
	

/**
 * Displays information of a MovieData struct.
 *
 * @param movieData A MovieData struct type.
 */
void displayMovieData(const MovieData& movieData)
{
	// Calculate first year profit or loss.
	double profitOrLoss = ((movieData.firstYearRevenue - movieData.movieCost) / movieData.movieCost) * 100;

	std::cout << "\nMovie Title: " << movieData.title;
	std::cout << "\nDirected by: " << movieData.director;
	std::cout << "\nYear Released: " << movieData.yearReleased;
	std::cout << "\nRunning Time: " << movieData.runningTime << " minutes";
	std::cout << std::fixed << std::setprecision(2) << "\nCost of Production: $" << movieData.movieCost;
	std::cout << std::fixed << std::setprecision(2) <<  "\nFirst Year Revenue: $" << movieData.firstYearRevenue;
	profitOrLoss > 0.0 ? std::cout << std::fixed << std::setprecision(2) << "\nProfit: " << abs(profitOrLoss) << "%\n" : std::cout << std::fixed << std::setprecision(2) << "\nLoss: " << abs(profitOrLoss) << "%\n";
}

