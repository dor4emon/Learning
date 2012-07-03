/*
 * methods.cpp
 *
 *  Created on: 03/07/2012
 *      Author: Jeff
 */
#include <iostream>
#include <string>

using namespace std;

void foo(int y)
{
	cout << "y= " << y << endl;
}

void methods()
{
	foo(5);

	int x = 1;
	foo(x);
	foo(x+4);
}

