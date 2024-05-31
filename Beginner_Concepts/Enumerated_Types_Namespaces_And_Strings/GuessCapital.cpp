#include <cstdio>
#include <iostream>
#include <string>

/**
	This is a program that repeatedly prompts the user to enter a
    capital for a state. Upon receiving the user input, the program reports whether
    the answer is correct.
    The number of questions answered corrected is displayed at the end of the program.
*/

int main(int argc, char const *argv[])
{
    		// Creates a 2-D array to store states and their capitals.
		std::string stateAndCapital[][2] = {
			{"abia", "umuahia"}, {"adamawa", "yola"}, {"akwa-ibom", "uyo"}, {"anambra", "awka"}, {"bauchi", "bauchi"},
				{"bayelsa", "yenagoa"}, {"benue", "makurdi"}, {"borno", "maiduguri"}, {"cross river", "calabar"},
				{"delta", "asaba"}, {"ebonyi", "abakaliki"}, {"edo", "benin city"}, {"ekiti", "ado ekiti"}, {"enugu", "enugu"},
				{"gombe", "gombe"}, {"imo", "owerri"}, {"jigawa", "dutse"}, {"kaduna", "kaduna"}, {"katsina", "katsina"},
				{"kano", "kano"}, {"kebbi", "birin kebbi"}, {"kogi", "lokoja"}, {"kwara", "ilorin"}, {"lagos", "ikeja"},
				{"niger", "minna"}, {"ogun", "abeokuta"}, {"ondo", "akure"}, {"osun", "osogbo"}, {"oyo", "ibadan"},
				{"plateau", "jos"}, {"rivers", "port harcourt"}, {"sokoto", "sokoto"}, {"taraba", "jalingo"},
				{"yobe", "damaturu"}, {"nasarawa", "lafia"}, {"zamfara", "gusau"}, {"FCT", "abuja"}
		};

		int row = 0, correct = 0;
		std::string answer = "";

		printf("\n\t\tSTATE AND CAPITAL\n\n");
		for (; row < 37; row++)
		{
			// Prompts the user to enter the capital of a state.
            std::cout << "\nWhat is the capital of " << stateAndCapital[row][0] << "? ";
			getline(std::cin, answer);

            // Converts the user's answer to lower case.
            for (int j = 0; j < answer.length(); ++j)
                answer[j] = tolower(answer[j]);

			if (answer.compare(stateAndCapital[row][1]) == 0)
			{
				std::cout << "\n" << answer << " is correct!\n";
				correct++;
			}
			else
                std::cout << "\n" << answer << " is wrong, the answer is: " << stateAndCapital[row][1] << "\n";
		}

	// Displays the number of correct and wrong answers.
	printf("\nThe number of correct answers is: %d\nThe number of wrong answers is: %d\n", correct, 37 - correct);

    return (0);
}
