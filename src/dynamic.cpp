/*
 * dynamic.cpp
 *
 *  Created on: 30/06/2012
 *      Author: Jeff
 */

#include <iostream>
#include <string>


using namespace std;

void dynamic()
{
	// Dynamic Variables
	int *pnValue = new int;
	*pnValue = 32;

	cout << "Value: " << *pnValue << endl;
	cout << "Address: " << pnValue << endl;

	delete pnValue;
	pnValue = 0;

	cout << pnValue << endl;

	cout << "Dynamic arrays" << endl;
	// Dynamic arrays
	int nSize = 12;
	int *pnArray = new int[nSize];

	for (int i = 0; i < nSize; i++)
	{
		pnArray[i] = 1;

	}

	pnArray[4] = 7;

	for (int i = 0; i < nSize; i++)
	{
		cout << pnArray[i] << endl;

	}

	delete[] pnArray;

	cout << "COnstant pointsrs" << endl;
	// Constant pointers
	int val = 3;
	const int *pVal = &val;

	cout << "Value accessed through pointer: " << *pVal << endl;
	cout << "Value accessed through variable: " << val << endl;

	val = 4;

	cout << val << endl;

	int num = 12;
	pVal = &num;

	cout << "Changed pointer: " << *pVal << endl;

}


