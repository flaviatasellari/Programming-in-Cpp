/*
   CH-230-A
   a10_p4.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

/* 3 constructors */
Critter::Critter () {
        cout << "Empty constructor" << endl;
        name = "default_critter";
        hunger = 0;
        boredom = 0;
        height = 5;
}

Critter::Critter (string newname) {
        cout << "Constructor with only name as parameter" << endl;
        name = newname;
        hunger = 0;
        boredom = 0;
        height = 5;
}

Critter::Critter (string newname, 
                 int newhunger, 
                 int newboredom, 
                 double newheight) {
        cout << "Constructor with all parameters" << endl;
        name = newname;
        hunger = newhunger;
        boredom = newboredom;
        height = newheight;
}

void Critter::setName (string& newname) {
	name = newname;
}

void Critter::setHunger (int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom (int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight (double newheight) {
	height = newheight;
}

string Critter::getName() {
	return name;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom() {
	return boredom;
}

double Critter::getHeight() {
	return height;
}

/* Print */
void Critter::print() {
        cout << 
        "Name: "
        << name << endl 
        << "Hunger: " 
        << hunger << endl
        << "Boredom: " 
        << boredom << endl
        << "Height: " << height <<  endl 
        << endl;
}
