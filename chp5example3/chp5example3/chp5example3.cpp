// chp5example3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "For:" << endl;
	for (int intCounter = 1; intCounter < 10; intCounter+=2) {
		cout << intCounter << endl;
	}

	int intCounterTwo = 10;

	cout << "While:" << endl;
	while (intCounterTwo < 10) {
		cout << intCounterTwo++ << endl;
	}

	cout << "Do:" << endl;
	do {
		cout << intCounterTwo++ << endl;
	} while(intCounterTwo < 10);

	
    return 0;
}

