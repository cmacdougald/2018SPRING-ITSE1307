// Name: Chris M.
// ITSE1307
// Assignment Name
// Description
/**
	Pseudo Code
		Sample Output
		Sample Variables
		Sample Variable Assignment
		Sample Math
  */

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Chapter 2 Examples" << endl;
	
	int intTotal = 0;
	int intHigherNumber = 10;
	int intLowerNumber = 5;
	/*
	char chrLetter = 'A';
	double dblSum = 0.0f;

	dblSum = 5.6f;
	chrLetter = 'B';
	intLowerNumber = 5;
	*/
	cout << "Please enter a number greater than 10: ";
	cin >> intHigherNumber;
	cout << "Please enter a number less than 10: ";
	cin >> intLowerNumber;

	intTotal = intHigherNumber - intLowerNumber;

	cout << "Total: " << intTotal 
		<< " if you take the higher number " 
		<< intHigherNumber 
		<< " and subtract " 
		<< intLowerNumber 
		<< "." << endl;

    return 0;
}

