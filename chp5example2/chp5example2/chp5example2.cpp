// chp5example2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intCounter = 0;

	while (intCounter < 10) {
		intCounter++;
		cerr << "DEBUG: " << intCounter << endl;
	}

	while (intCounter >= 10 && intCounter < 100) {
		intCounter++;
		cerr << "DEBUG: " << intCounter << endl;
	}

    return 0;
}

