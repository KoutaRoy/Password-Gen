// Apple $ finder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a;
	int m;
	cout<<"Plz input Cost of product:";
	cin >> a;
	cout << "Plz input how much money you have:";
	cin >> m;
	if(m>=a){
		cout << "You can buy: "<< m/a<<endl;
	}
	else cout << "Go away"<<endl;
	cout << "Press any key to exit";
	cin >> a;
}

