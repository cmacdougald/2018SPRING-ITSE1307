// chp4example3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int intChoice = 0;

	cout << "Enter a choice: ";
	cin >> intChoice;

	switch (intChoice) {
		case 1:
			cout << "Case 1" << endl;
		case 2:
			cout << "Case 2" << endl;
			break;
		case 3: case 4:
			cout << "Case 3 and 4" << endl;
			break;
		default:
			cout << "Null case." << endl;
			break;
	}


    return 0;
}

