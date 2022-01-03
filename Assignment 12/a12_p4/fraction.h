/*
   CH-230-A
   a12_p4.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>
using namespace std;

class Fraction {

private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    int gcd(int a, int b);      // calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();                 // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
                                // integers. Denominator by default is 1.
    
	friend ostream& operator<< (ostream& ostr, const Fraction& frac);
    friend istream& operator>> (istream& istr, Fraction& frac);
    Fraction operator* (Fraction&);
    Fraction operator/ (Fraction&);
};

#endif /* FRACTION_H_ */
