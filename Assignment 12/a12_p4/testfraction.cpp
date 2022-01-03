/*
   CH-230-A
   a12_p4.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a(4, 2);
    Fraction b(17, 11);
    Fraction c(5);
    
	cout << a << endl 
	<< b << endl 
	<< c << endl;

    /* Enter two fractional numbers */
	Fraction frac1, frac2;
    cout << endl << "Enter the first fraction:" << endl;
	cin >> frac1;
	cout << "Enter the second fraction:" << endl;
    cin >> frac2;

	cout << endl << "The product of the fractions: " << frac1 * frac2 << endl;
	cout << endl << "The quotient of the fractions: " << frac1 / frac2 << endl;
}