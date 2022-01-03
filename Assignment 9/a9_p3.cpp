/*
   CH-230-A
   a9_p3.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

/* The function for the absolute value */
float absolute_val (float x) {
    if (x >= 0) {
        return x;
    }
    else {
        return (-x);
    }
}

int main () {
    float x;
    cin >> x;

    /* Call the function and print the absolute value */
    float y;
    y = absolute_val (x);
    cout << "The absolute value: " << y << endl;

    return 0; 
}