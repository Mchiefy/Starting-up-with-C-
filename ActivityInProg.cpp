// ActivityInProg.cpp : Defines the entry point for the console application.
// October 11, 2018

#include "stdafx.h"
#include <iostream>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int rows, Character, spaces;
	int numChar = 26;
	int numrows = numChar;

	for (rows = 1; rows <= numrows; rows++) {
		for (spaces = 1; spaces <= numChar; spaces++) {
			cout << (" ");
		}
		for (Character = 1; Character <= rows; Character++) {
			cout << (" %c", (char)(Character + 64));
			cout << (" ");
		}
		cout << ("\n");
		numChar = numChar - 1;
	}
	system ("pause");

}

