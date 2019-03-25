// Git1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void Function1()
{
	cout << "Function 1\n";
	cout << "Line 2\n";
}


int main()
{
    cout << "Hello World!\n"; 
	cout << "Welcome to the Version Control example\n";

	cout << endl;
	cout << "---------\n";
	cout << "Main Menu\n";
	cout << "---------\n";
	//TODO: Add Main Menu code here

	Function1();

	system("pause");
	return 0;
}

