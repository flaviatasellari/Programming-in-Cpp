/*
   CH-230-A
   a12_p5.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
    
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

/* GCD of two numbers */
int Fraction::gcd(int n, int d)
{   
    if (d == 0) {
        return n;
    }
    else {
        return gcd(d, n%d);
    }
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b); 

}

/* Replace the method print() by an overloaded operator << */
std::ostream& operator<<(ostream& ostr, const Fraction& frac) {
    ostr << frac.num << '/' << frac.den; 
    return ostr;
}

/* Overload the operator >> to enter from the keyboard a fraction */
std::istream& operator>>(istream& istr, Fraction& frac) {
    do {
        istr >> frac.num >> frac.den;
        
		/* When the denominator is 0, the following happens */
        if (frac.den == 0) {
            cout << "Undefined fraction!!! Enter again." << endl;
        }
    }
	while (frac.den == 0); 
    return istr;
}

/* Overload the operator ∗ for computing the multiplication */
Fraction Fraction::operator*(Fraction &frac) {
    Fraction prod (this->num * frac.num / 
	               gcd(this->num * frac.num, this->den * frac.den), 
	               this->den * frac.den / 
				   gcd(this->num * frac.num, this->den * frac.den));
   
    return prod;
}

/* Overload the operator / for computing the division */
Fraction Fraction::operator/(Fraction &frac) {
    Fraction quo (this->num * frac.den / 
	              gcd(this->num * frac.den, this->den * frac.num), 
				  this->den * frac.num / 
				  gcd(this->num * frac.den, this->den * frac.num));
    
	return quo;
}

/* Overload the operators + for computing the sum */
Fraction Fraction::operator+(Fraction &frac) {
    Fraction sum ((this->num * lcm(this->den, frac.den) / this->den) + 
                 (frac.num * lcm(this->den, frac.den) / frac.den), 
                 lcm(this->den, frac.den));
    return sum;
}

/* Overload the operators - for computing the difference */
Fraction Fraction::operator-(Fraction &frac) {
    Fraction difference ((this->num * lcm(this->den, frac.den) / this->den) - 
                        (frac.num * lcm(this->den, frac.den) / frac.den), 
                        lcm(this->den, frac.den));
    return difference;
}

/* Overload the operator = for assigning */
Fraction Fraction::operator=(Fraction &frac) {
    this->num = frac.num;
    this->den = frac.den;

    return frac;
}

/* Overload the operators < and > to compare two fractions */

bool operator>(const Fraction& a, const Fraction& b) {
	return a.num * b.den > a.den * b.num;
}

bool operator<(const Fraction& a, const Fraction& b) {
	return a.num * b.den < a.den * b.num;
}