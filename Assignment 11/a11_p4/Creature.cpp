/*
   CH-230-A
   a11_p4.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

/*      WIZARD      */
Wizard::Wizard() : distFactor(3) {
    cout << "The wizard created." << endl;
}  

/* Method */
void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard() {
    cout << "Wizard disappeared" <<endl;
}

/*      WINX      */
Winx::Winx() : fly_factor(2) {
    cout << "The winx created." << endl;
}

/* Method */
void Winx::fly() const {
    cout << "flying " << (fly_factor * distance) << " meters!" << endl;
}

Winx::~Winx() {
    cout << "Winx diasppeared" << endl;
}

/*     YETI     */
Yeti::Yeti() : ski_factor(10) {
    cout << "The yeti created." << endl;
}

/* Method */
void Yeti::ski() const {
    cout << "skiing " << (ski_factor * distance) << " meters!" << endl;
}

Yeti::~Yeti() {
    cout << "Yeti disappeared" << endl;
}