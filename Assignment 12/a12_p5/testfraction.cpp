/*
   CH-230-A
   a12_p5.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main () {
    /* Enter two fractional numbers */
	Fraction frac1, frac2;
    cout << "Enter the first fraction:" << endl;
	cin >> frac1;
	cout << "Enter the second fraction:" << endl;
    cin >> frac2;
    
    cout << endl << "The product of the fractions: " << frac1 * frac2 << endl;
	cout << endl << "The quotient of the fractions: " << frac1 / frac2 << endl;
    cout << endl << "The sum of the fractions: " << frac1 + frac2 << endl;
	cout << endl << "The difference of the fractions: " << frac1 - frac2 <<endl;
    
    /* Printing 0 if it is false or 1 if it is true */
    cout << endl << "First fraction > Second fraction = "<< (frac1>frac2)<<endl;
    cout << "First fraction < Second fraction = " << (frac1 < frac2) << endl;
   
    Fraction frac3;
    frac3 = frac1;
    cout << endl << "Assigning: " << frac3 << endl;
    return 0;
}