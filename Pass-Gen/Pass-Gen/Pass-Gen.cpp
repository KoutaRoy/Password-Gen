﻿// Pass-Gen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int y;
	int x;
	cout << "How long do you want your password to be?(Enter digits)" << endl;
	cin >> y;
	for (int x=1; x<=y ; x++)
	cout << rand() % 9 + 1;
	cin >> c;
	cout << c;




}

