///*
// * movies.cpp
// *
// *  Created on: Aug 18, 2011
// *      Author: Jeff
// */
//
// array of structures
#include <iostream>
#include <string>
#include <sstream>
#include "add.h"
using namespace std;

#define N_MOVIES 3

struct movies_t
{
  string title;
  int year;
} films [N_MOVIES];

struct Person
{
	string name;
	int age;

} alice, bob;

void printmovie (movies_t movie);

int movies ()
{
	cout << "Sum 3 and 4 is: " << add(3, 4) << endl;
	alice.name = "Alice";
	bob.name = "Bob";
	bob.age = 21;

	Person charlie = {"Charlie", 21};
	cout << charlie.age << endl;
	cout << charlie.name << endl;

	Person *palice = &alice;
	Person *pbob = &bob;
	Person *pcharlie = &charlie;

	Person &alice2 = alice;
	Person &bob2 = bob;

	cout << "(Pointer dereference) Alice's name is: " << (*palice).name << endl;
	cout << "Using -> Alice's name is: " << palice->name << endl;

	cout << "Alice's age is: " << alice2.age << endl;
	cout << "Bob's age is: " << bob2.age << endl;
	cout << "Bob's name is: " << bob2.name << endl;

	cout << "BOB's age is: " << pbob->age << endl;
	cout << "Charlie is " << pcharlie->age << " years old" << endl;

	if (pcharlie->age > bob.age)
	{
		cout << "Charlie is older than bob" << endl;

	}
	else if (pbob->age == charlie.age)
	{
		cout << "Bob and Charlie are the same age" << endl;
	}
	else
	{
		cout << "Bob is older than Charlie" << endl;
	}

//
//	int n = 1;
//	while (n <= 100)
//	{
//		cout << n << " ";
//		if (n % 10 == 0)
//		{
//			cout << endl;
//		}
//		n++;
//	}
//
//	// nSelection must be declared outside do/while loop
//	int nSelection;
//
//	do
//	{
//		cout << "Please make a selection: " << endl;
//		cout << "1) Addition" << endl;
//		cout << "2) Subtraction" << endl;
//		cout << "3) Multiplication" << endl;
//		cout << "4) Division" << endl;
//		cin >> nSelection;
//	} while (nSelection != 1 && nSelection != 2 &&
//			nSelection != 3 && nSelection != 4);
//
//	// do something with nSelection here
//	// such as a switch statement
//	switch (nSelection)
//	{
//		case 1:
//			cout << "You picked add!" << endl;
//			break;
//		case 2:
//			cout << "You picked subtract!" << endl;
//			break;
//		case 3:
//			cout << "You picked multiply!" << endl;
//			break;
//		case 4:
//			cout << "You picked divide!" << endl;
//			break;
//		default:
//			cout << "You exited" << endl;
//			break;
//	}

//  string mystr;
//
//
//  for (int n=0; n<N_MOVIES; n++)
//  {
//    cout << "Enter title: ";
//    getline (cin,films[n].title);
//    cout << "Enter year: ";
//    getline (cin,mystr);
//    stringstream(mystr) >> films[n].year;
//
//  }
//
//  cout << "\nYou have entered these movies:\n";
//  for (int n=0; n<N_MOVIES; n++)
//    printmovie (films[n]);
//
//  cout << "size of movies_t is: " << sizeof(movies_t) << endl;



	return 0;
}



void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")" << endl;
}


