// chp5game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int intNumber = 68;
	int intGuess = 0;

	srand(time(0));
	intNumber = rand() % 100;
	//cerr << "DEBUG: " << "Number " << intNumber << endl;

	while (intGuess != intNumber) {
		
		do {
			cout << "Guess the number between 0 and 100: ";
			cin >> intGuess;
		} while (intGuess < 0 || intGuess > 100);

		if (intGuess == intNumber) {
			cout << "Congrats you guessed it." << endl;
		}
		else if (intGuess > intNumber) {
			cout << "You guessed to high!" << endl;
		}
		else {
			cout << "You guessed to low!" << endl;
		}
	}

    return 0;
}

