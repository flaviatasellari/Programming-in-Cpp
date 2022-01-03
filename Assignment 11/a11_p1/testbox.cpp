/*
   CH-230-A
   a11_p1.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;

int main () {
    double h, w, d;

    int n;
    cout << "The number of boxes is ";
    cin >> n;

    /* Create the array of boxes */
    Box *all_boxes = new Box[2*n];

    /* Get input for the data of the boxes */
    int i;
    for (i = 0; i < n; i++) {
       cout << "Height of box " << i+1 << ": " << endl;
       cin >> h;
       all_boxes[i].setHeight(h);
       cout << "Width of box " << i+1 << ": " << endl;
       cin >> w;
       all_boxes[i].setWidth(w);
       cout << "Depth of box " << i+1 << ": " << endl;
       cin >> d;
       all_boxes[i].setDepth(d);
    }
    
    for (i = n; i < 2*n; i++) {
        all_boxes[i] = all_boxes[i-n];
    }

    /* Print the volumes of the boxes */
    for (i = 0; i < 2*n; i++) {
        cout<<"The volume of box "<<i+1<<" is "<< all_boxes[i].volume()<<endl;
    }
    
    delete [] all_boxes;

    return 0;
}