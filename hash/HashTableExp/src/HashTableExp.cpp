//============================================================================
// Name        : HashTableExp.cpp
// Author      : opnmpd
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "HashTable.h"

int main()
{
	const int N = 10;

	//DataPair<int, float> dataPair;
	HashTable <int, float> hashTbl(10);

	for (int i = 0; i < hashTbl.size(); i++)
	{
		hashTbl[i] = i * 1.5;
	}

	for (int i = 0; i < hashTbl.size(); i++)
	{
		cout << hashTbl[i] << endl;
	}

	return 0;

}
