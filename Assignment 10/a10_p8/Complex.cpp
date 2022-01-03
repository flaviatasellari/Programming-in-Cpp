/*
   CH-230-A
   a10_p8.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Complex.h"

Complex::Complex ()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex (float newreal, float newimaginary) {
    real = newreal;
    imaginary = newimaginary;
}

Complex::Complex (const Complex& a) {
    real = a.real;
    imaginary = a.imaginary;
}

Complex::~Complex () {} 

/* Setters */
void Complex::setReal (float newreal) {
    real = newreal;
}

void Complex::setImaginary (float newimaginary) {
    imaginary = newimaginary;
}

/* Getters */
float Complex::getReal () {
    return real;
}

float Complex::getImaginary () {
    return imaginary;
}

Complex Complex::conjugate () {
    Complex a;
    a.real = real;
    a.imaginary = (-imaginary);
    return a;
}

/* Calculate the sum of two complex numbers */
Complex Complex::add (Complex b) {
    Complex a;
    a.real = real + b.real;
    a.imaginary = imaginary + b.imaginary;
    return a;
}

/* Calculate the difference of two complex numbers */
Complex Complex::subtract (Complex b) {
    Complex a;
    a.real = b.real - real;
    a.imaginary = b.imaginary - imaginary;
    return a;
}

/* Calculate the product of two complex numbers */
Complex Complex::multiply (Complex b) {
    Complex a;
    a.real = (real * b.real) - (imaginary * b.imaginary);
    a.imaginary = (imaginary * b.real) + (real * b.imaginary);
    return a;
}

void Complex::print () {
    if (imaginary) {
		cout << noshowpos << real << showpos << imaginary << "i" << endl;
	} else {
		cout << noshowpos << real << endl;
	}
}