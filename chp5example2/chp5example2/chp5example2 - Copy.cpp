// chp5example2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	bool boolIsDone = false;
	int intCounter = 0;

	while (!boolIsDone) {
		intCounter++;
		cerr << "DEBUG: " << intCounter << endl;
		if (intCounter >= 10) {
			boolIsDone = true;
		}
	}

    return 0;
}

