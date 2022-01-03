/*
   CH-230-A
   a13_p2.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex ()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex (int newreal, int newimaginary) {
    real = newreal;
    imaginary = newimaginary;
}

Complex::Complex (const Complex& a) {
    real = a.real;
    imaginary = a.imaginary;
}

Complex::~Complex () {} 

/* Setters */
void Complex::setReal (int newreal) {
    real = newreal;
}

void Complex::setImaginary (int newimaginary) {
    imaginary = newimaginary;
}

/* Getters */
int Complex::getReal () {
    return real;
}

int Complex::getImaginary () {
    return imaginary;
}

/* Overloaded operator << */
ostream& operator<<(ostream& str_o, const Complex& comp) {
    if (comp.imaginary) {
        str_o << noshowpos << comp.real << showpos << comp.imaginary 
                                                   << "i" << endl;
    } else {
        str_o << noshowpos << comp.real << endl;
    }

    return str_o;
}

/* Overloaded operator >> */
istream& operator>>(istream& str_i, Complex& comp) {
    str_i >> comp.real >> comp.imaginary;

    return str_i;
}

/* Assigning */
Complex Complex::operator=(Complex& comp) {
    real = comp.real;
    imaginary = comp.imaginary;
    return comp;
}

/* Calculate the sum of two complex numbers */
Complex Complex::operator+(Complex& comp) {
    Complex a;
    a.real = real + comp.real;
    a.imaginary = imaginary + comp.imaginary;

    return a;
}

/* Calculate the difference of two complex numbers */
Complex Complex::operator-(Complex& comp) {
    Complex a;
    a.real = comp.real - real;
    a.imaginary = comp.imaginary - imaginary;

    return a;
}

/* Calculate the product of two complex numbers */
Complex Complex::operator*(Complex& comp) {
    Complex a;
    a.real = (real * comp.real) - (imaginary * comp.imaginary);
    a.imaginary = (imaginary * comp.real) + (real * comp.imaginary);

    return a;
}
