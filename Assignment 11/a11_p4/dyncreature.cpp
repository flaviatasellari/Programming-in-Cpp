/*
   CH-230-A
   a11_p4.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

/* The test program */
int main () {
    string name;

    while (true) {
        cout << "Enter a creature:" << endl;
        cin >> name;

        if (name == "wizard") {
            /* If wizard is entered, the following happens */
            cout << "\nCreating a Wizard.\n";
            Wizard *w = new Wizard();
            w -> run();
            w -> hover();

            delete w;
            cout << endl;
        }
        else if (name == "winx") {
            /* If winx is entered, the following happens */
            cout << "\nCreating a Winx.\n";
            Winx *wx = new Winx();
            wx -> run();
            wx -> fly();

            delete wx;
            cout << endl;
        }
        else if (name == "yeti") {
            /* If yeti is entered, the following happens */
            cout << "\nCreating a Yeti.\n";
            Yeti *y = new Yeti();
            y -> run();
            y -> ski();

            delete y;
            cout << endl;
        }
        else if (name == "quit") {
            /* The execution of the program stops */
            break;
        }
        else {
            /* Continue taking input if neither of 
               the three creatures is entered */
            cout << "This is not part of our creatures!\n" << endl;
            continue;
        }
    }
    return 0;
}
