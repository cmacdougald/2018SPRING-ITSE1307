// chp10example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Bottle.h"
using namespace std;

int main()
{
	Bottle objBottle(5, 100);

	cout << objBottle.isClosed() << endl;
	objBottle.open();
	cout << objBottle.isClosed() << endl;
	cout << objBottle.volume() << endl;

    return 0;
}

