/*
 * references.cpp
 *
 *  Created on: 30/06/2012
 *      Author: Jeff
 */

#include <iostream>
#include <string>

using namespace std;

void references()
{
	int val1 = 3;
	int val2 = val1;

	cout << val1 << endl;
	cout << val2 << endl;

	val1 = 4;
	cout << "Changed val1" << endl;

	cout << val1 << endl;
	cout << val2 << endl;

	cout << "Addresses: " << endl;
	cout << &val1 << endl;
	cout << &val2 << endl;

	int val3 = 43;

	const int &valRef = val3;
	cout << valRef << endl;

	val3 = 27;
	cout << "valRef is : " << valRef << endl;
	cout << "val3 is : " << val3 << endl;

	// const pointers and references
	int val4 = 11;
	const int *pval4 = &val4;
	int &val4ref = val4;

	cout << "Pointer is: " << pval4 << endl;
	cout << "Reference address is: " << &val4ref << endl;

	cout << "Pointer dereference value is: " << *pval4 << endl;
	cout << "Reference value is: "	<< val4ref << endl;

	void *pVoid;
	int nVal = 1224;

	pVoid = &nVal;

	int *ptr = static_cast<int*>(pVoid);

	cout << *ptr << endl;




}
