/*
   CH-230-A
   a10_p2.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName (string& newname) {
  name = newname;
}

void Critter::setHunger (int newhunger) {
	hunger = newhunger;
}

void Critter::setEyeColor (string& neweye_color) {
  eye_color = neweye_color;
}

void Critter::setHairColor (string& newhair_color) {
  hair_color = newhair_color;
}

/* Print */
void Critter::print() {
	cout
  <<
  "I am " 
  << name << 
  ". My hunger level is " 
  << hunger << 
  ". My eye color is " 
  << eye_color << 
  ". My hair color is " 
  << hair_color << 
  "." << endl;
}

int Critter::getHunger() {
	return hunger;
}

string Critter::getEyeColor() {
  return eye_color;
}

string Critter::getHairColor() {
  return hair_color;
}
