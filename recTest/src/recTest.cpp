//============================================================================
// Name        : recTest.cpp
// Author      : Mike Devlin
// Version     :
// Copyright   : Mike's copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int myFunc (int x)
{
	return x + 1;
}

int main() {
	cout << "Enter number!" << endl;
	int x;
	cin >> x;
	cout << "Your number is : " << x << endl;
	cout << "myFunc returned :" << myFunc(x) << endl;
	return 0;
}
