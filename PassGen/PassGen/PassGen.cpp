// PassGen.cpp : This is a password gen
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x;
	int y;
	cout << "How long do you want your password to be?(Enter digit)" << endl;
	cin >> x;
	if (x < 12) cout << "Here is your password:";
	if (x == 1) { cout << rand() % 9 + 1; }
	if (x == 2) { cout << rand() % 99 + 10; }
	if (x == 3) { cout << rand() % 999 + 100; }
	if (x == 4) { cout << rand() % 9999 + 1000; }
	if (x == 5) { cout << rand() % 99999 + 10000; }
	if (x == 6) { cout << rand() % 999999 + 100000; }
	if (x == 7) { cout << rand() % 9999999 + 1000000; }
	if (x == 8) { cout << rand() % 99999999 + 10000000; }
	if (x == 9) { cout << rand() % 999999999 + 100000000; }
	if (x == 10) { cout << rand() % 9999999999 + 1000000000; }
	if (x == 11) { cout << rand() % 99999999999 + 10000000000; }
	if (x == 12) { cout << rand() % 999999999999 + 100000000000; }
	if (x > 12) { cout << "Number too big" << endl; }
	cout << "\n Press e to exit";
	cin >> y;
	cout << y;
}

