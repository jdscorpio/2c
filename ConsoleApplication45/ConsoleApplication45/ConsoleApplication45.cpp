// ConsoleApplication45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include "matem.h"

using namespace std;

void info()
{
	cout << "-------------------" << endl;
	cout << "Autor: Jan Kowalski" << endl;
	cout << "-------------------" << endl;
}

int sumTwoNumbers(int a, int b)
{
	return a + b;
}



double fun(int a, int b)
{
	return sqrt(2*a+b)/(pow(a,4)-1);
}


int main()
{
	info();
	cout << sumTwoNumbers(2, 3) << endl;
	cout << absolute(-3.12) << endl;
	cout << fun(0, 1) << endl;
	cout << power(2, 4) << endl;
}

