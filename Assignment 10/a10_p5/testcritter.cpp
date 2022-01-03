/*
   CH-230-A
   a10.p5.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

int main (int argc, char** argv) {
    /* Instance without properties */
    Critter c1;
    c1.setHunger(2);
    c1.print();

    /* Instance with only name supplied */
    Critter c2 ("Flavia");
    c2.setHunger(2);
    c2.print();

    /* Instance with all parameters supplied */
    Critter c3 ("Jane", 2, 7, 50);
    c3.print();

    /* Instance without height supplied */
    Critter c4 ("Alex", 2, 4);
    c4.print();
}