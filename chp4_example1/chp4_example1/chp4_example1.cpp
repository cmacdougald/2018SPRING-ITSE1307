// chp4_example1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intNumber = 0;

	cout << "Please enter a number between 1 and 10: ";
	cin >> intNumber;

	/*
	if (5 == intNumber) {
		cout << "Number is 5" << endl;
	}
	else {
		cout << "Number is not 5" << endl;
	}
	//*/

	if (intNumber >= 1 && intNumber <= 10) {
		cout << "Valid input." << endl;
	}
	else {
		cout << "Invalid input." << endl;
	}

    return 0;
}

