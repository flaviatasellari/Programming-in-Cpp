/*
   CH-230-A
   a10_p8.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main () {
    double numr1, numi1;

    cout << "First complex number - real part: ";
    cin >> numr1;
    cout << "First complex number - imaginary part: ";
    cin >> numi1;
    Complex c1 (numr1, numi1);
    c1.print();

    double numr2, numi2;

    cout << "Second complex number - real part: ";
    cin >> numr2;
    cout << "Second complex number - imaginary part: ";
    cin >> numi2;
    Complex c2 (numr2, numi2);
    c2.print();
    
    Complex c;
    Complex c3;
    Complex c4;
    Complex c5;
    
    /* Conjugate */
    c = c1.conjugate();
    cout << "The conjugate of the first complex number: ";
    c.print();
    
    /* Addition */
    c3 = c1.add(c2);
    cout << "The sum of the two complex numbers: ";
    c3.print();

    /* Difference */
    c4 = c1.subtract(c2);
    cout << "The difference of the two complex numbers: ";
    c4.print();

    /* Multiplication */
    c5 = c1.multiply(c2);
    cout << "The product of the two complex numbers: ";
    c5.print();
    cout << endl;

    return 0;
}