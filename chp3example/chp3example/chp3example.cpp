// Author: Chris M.
// Desc: Examples of User Input and cin.

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	char chrLetter = '-';
	int intNumber = 0;
	string strWord = "Blank";
	cout << "Chapter 3: Input and Output" << endl;
	cout << "Enter a letter use a space and enter a number: ";
	cin >> chrLetter >> intNumber;
	//cin.get(chrLetter);
	//cin >> intNumber;
	cout << "Enter a string: ";
	//cin >> strWord;
	cin.clear();
	cin.ignore(10, '\n');
	getline(cin, strWord);
	cout << "Number: " << intNumber << " Letter: " << chrLetter << endl;
	cout << "Number: " << pow(intNumber, 2.0) << " Letter: " << chrLetter << endl;
	cout << "Word: " << strWord << " Word Length: " << strWord.length() << endl;
    return 0;
}

