// chp2example2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const float FLTLIGHTYEARS = 3.26156;

int main()
{
	float fltParsecs = 1.0;
	float fltLightYears = 1.0;
	string strFirstName = "";

	cout << "Enter the number of parsecs: ";
	cin >> fltParsecs;

	fltLightYears = FLTLIGHTYEARS * fltParsecs;

	cout << fltParsecs << " Parsec is " << fltLightYears << " Light-years" << endl;
    return 0;
}

