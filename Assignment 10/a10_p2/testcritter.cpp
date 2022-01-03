/*
   CH-230-A
   a10_p2.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	string eye_color;
	string hair_color;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name); // Get input
	cout << "Hunger: ";
	cin >> hunger; // Get input
	c.setHunger(hunger);
	cout << "Eye color: ";
	getchar();
	getline(cin, eye_color); // Get input
	c.setEyeColor(eye_color); 
	cout << "Hair color: ";
	getline(cin, hair_color); // Get input
	c.setHairColor(hair_color);

	cout << "You have created:" << endl;
	c.print();
    return 0;
}