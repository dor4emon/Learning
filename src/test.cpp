/*
 * test.cpp
 *
 *  Created on: Aug 11, 2011
 *      Author: Jeff
 */

#include <iostream>
#include <string>
#include <sstream>
#include <new>

using namespace std;


void duplicate (int, int);
int divide (int a, int b=2);

//class CRectangle {
//	int *width, *height;
//public:
//	CRectangle (int, int);
//	~CRectangle ();
//	int area() {return ((*width) * (*height));}
//	int perimeter();
//};
//
//CRectangle::CRectangle(int a, int b) {
//	width = new int;
//	height = new int;
//	*width = a;
//	*height = b;
//}
//
//CRectangle::~CRectangle () {
//	delete width;
//	delete height;
//}
//
//int CRectangle::perimeter() {
//	return (2*(*width) + 2*(*height));
//}

class CVector {
public:
	int x, y;
	CVector() {x = 0; y = 0;};
	CVector (int, int);
	CVector operator + (CVector);
};

CVector::CVector (int a, int b) {
	x = a;
	y = b;
}

CVector CVector::operator +(CVector param) {
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return (temp);
}

//int main()
//{
//	CVector a (3, 1);
//	CVector b (1, 2);
//	CVector c;
//	c = a + b;
//	cout << c.x << ", " << c.y << endl;
//
//
//
//
////	string mystr;
////
////	string name;
////	int age;
////
////	cout << "Enter your name: ";
////	getline(cin, name);
////	cout << "Enter your age: ";
////	getline(cin, mystr);
////	stringstream(mystr) >> age;
////
////	cout << name << " is " << age << " years old";
////	int i, n;
////	int *p;
////	cout << "How many numbers?: ";
////	cin >> i;
////
////	p = new (nothrow) int[i];
////	if (p == 0)
////	{
////		cout << "Error: memory could not be allocated";
////		return -1;
////	}
////
////	else
////	{
////		for (n = 0; n < i; n++)
////		{
////			cout << "Enter number: ";
////			cin >> p[n];
////		}
////	}
////	cout << "You have entered: ";
////	for (n = 0; n < i; n++)
////	{
////		cout << p[n] << ", ";
////	}
////	delete []p;
////
////	cout << endl;
////
////	struct product {
////		int weight;
////		float price;
////	} apple, banana;
////
////	product melon;
////	apple.weight = 2;
////	apple.price = 1.4;
////
////	melon.weight = 5;
////	melon.price = 4.3;
////
////	cout << "Apple weight is: " << apple.weight << endl;
////	cout << "Apple price is: " << apple.price << endl;
////
////	cout << "Melon weight is: " << melon.weight << endl;
////	cout << "Melon price is: " << melon.price << endl;
////
////	string temp;
////	cout << "Enter banana weight: " << endl;
////	getline(cin, temp);
////	stringstream(temp) >> banana.weight;
////
////	cout << "Enter banana price: " << endl;
////	getline(cin, temp);
////	stringstream(temp) >> banana.price;
////
////	cout << "Banana weight is: " << banana.weight << endl;
////	cout << "Banana price is: " << banana.price << endl;
////
////	int x = 1;
////	int y = 3;
////
////	cout << &x << endl;
////	cout << &y << endl;
////
////	int firstvalue, secondvalue;
////	int * mypointer;
////
////	mypointer = &firstvalue;
////	*mypointer = 10;
////	mypointer = &secondvalue;
////	*mypointer = 20;
////	cout << "firstvalue is " << firstvalue << endl;
////	cout << "secondvalue is " << secondvalue << endl;
////
////	int a[] = {1, 2, 3, 4, 5};
////	cout << a[4] << endl;
////	cout << *(a+4) << endl;
////	duplicate(x, y);
////	cout << "x= " << x << endl << "y = " << y << endl;
////
////	cout << divide(12);
////	cout << endl;
////	cout << divide (20, 4);
////
////	int length = 4;
////	int array [] = {4, 5, 6, 4};
////
////	for (int i = 0; i < length; i++)
////	{
////		cout << array[i] << endl;
////	}
////	string s1 ("This is the 1st string");
////	string s2 ("This is the 2nd string");
////
////	int x (454);
////	int y (433);
////
////	cout << x  << "+" << y << "is" << x+y << endl << y << endl;
////
////	int a, b, f, d;
////	a = 2 + (b = 4);
////
////
////	cout << "a: " << a << endl;
////
////	a = b = f = d =7;
////	b = 3443;
////	cout << "a: " << a << endl;
////	cout << d << endl;
////
////	a = (b = 4, b*5);
////	cout << "out of 4 and 5, a got assigned to " << a << endl;
////	cout << (a > b ? a : b ) << endl;
////
////	int i;
////	float g = 4.56;
////	i = int (g);
////
////	cout << i << endl;
////
////	cout << "int is " << sizeof(int) << "bytes" << endl;
////	cout << "float is " << sizeof(float) << "bytes" << endl;
////	cout << "char is " << sizeof(char) << "bytes" << endl;
////
////	string great;
////	cout << "Please enter an string: ";
//////	cin >> great;
////	cout << "The value you entered is: "  << endl;
////
////	string mystr;
////	float price = 0;
////
////	cout << "Enter price: ";
////	getline (cin, mystr);
////	stringstream(mystr) >> price;
////
////	int n;
////	cout << "Enter a number :";
////	cin >> n;
////
////	while (n > 0)
////	{
////		cout << n << endl;
////		n--;
////	}
////	cout << "Finished" << endl;
////
////	int rows;
////	cout << "Enter number of rows: ";
////	cin >> rows;
////
////	for (int e = 1; e <= rows; e++)
////	{
////		for (int f = 1; f <= rows; f++)
////		{
////			cout << e;
////		}
////		cout << endl;
////	}
//
//
//	return 0;
//}

int divide (int a, int b)
{
	int r;
	r = a/b;
	return r;
}


void duplicate (int a, int b)
{
	a*=2;
	b*=2;

}
