#include <iostream>
#include <ctime>
using std::cout; // this helps reduce the repetitive typing of std::cout down to just cout
using std::cin; // again, removes the need to prefix std:: in front of cin

int main()
{
	// Define the variables we'll be using.
	int num;
	int maxNum = 100;
	int guess;
	int tries = 0;

	// setup the pseudo-random number generator and base it on the time seed (#include <ctime>)
	srand(time(0));
	// assign the variable num to the random number with a maximum number of maxNum. 
	// We add 1 due to the computer starting counting at 0
	num = (rand() % maxNum) + 1;

	// Lets just send a Clear Screen to clear the console screen of excess content.
	system("CLS");

	// Output a title with a couple of carriage returns 
	cout << "********** NUMBER GUESSING GAME **********\n\n";

	// Do While Loop to keep the user in the game until they guess the correct number.
	do {
		// prompt the user for their guess.
		cout << "Enter a guess between (1-100): ";
		// read the users guess into the guess variable.
		cin >> guess;
		// Increment the number of tries the user has had.
		tries++;

		// test the guess against the num variable and display corresponding information to the console.
		if (guess > num) {
			cout << "Too high!\n";
		}
		else if (guess < num) {
			cout << "Too low!\n";
		}
		else {
			cout << "CORRECT! # of tries: " << tries << '\n';
		}
	} while (guess != num);

	// Output an end of game wrapper with a couple of carriage returns
	cout << "******************************************\n\n";
}