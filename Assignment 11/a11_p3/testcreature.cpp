/*
   CH-230-A
   a11_p3.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

/* The test program */
int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Winx.\n";
    Winx wx;
    wx.run();
    wx.fly();

    cout << "\nCreating a Yeti.\n";
    Yeti y;
    y.run();
    y.ski();

    return 0;
} 