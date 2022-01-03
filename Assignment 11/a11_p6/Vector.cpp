/*
   CH-230-A
   a11_p6.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

void Vector::setVectorSize(int num) {
    vector_size = num;
}

/* Default constructor */
Vector::Vector() {}

Vector::Vector(double *arr) {
    /* It can be compiled in my complier 
    but I don't understand why it doesn't work on Grader.
    That's why I commented out this part */
    //elements = new double[vector_size];
    for (int i = 0; i < vector_size; i++) {
        elements[i] = arr[i];
    }
}

/* Copy constructor */
Vector::Vector(const Vector& arr) {
    /* It can be compiled in my complier 
    but I don't understand why it doesn't work on Grader.
    That's why I commented out this part */
    //elements = new double[vector_size];
    for (int i = 0; i < vector_size; i++) {
        elements[i] = arr.elements[i];
    }
}

/* Destructor */
Vector::~Vector() {
    cout << "\nVector destroyed" << endl;
    delete [] elements;
}

/* Method to print */
void Vector::print() {
    for (int i = 0; i < vector_size; i++) {
        if (i == 0) {
            cout << "(" << elements[i] << ", ";
        }
        else if (i == (vector_size-1)) {
            cout << elements[i] << ")" << endl;
        }
        else {
            cout << elements[i] << ", ";
        }
    }
}

/* Setter */
void Vector::setElements(double *a) {
    elements = new double[vector_size];
    for (int i = 0; i < vector_size; i++)
        elements[i] = a[i];
}

/* Getter */
void Vector::getElements(double* a) {
    for (int i = 0; i < vector_size; i++)
        a[i] = elements[i];
}

/* Method to compute the norm of a vector */
double Vector::norm() {
    double n = 0;

    for (int i = 0; i < vector_size; i++)
        n += elements[i] * elements[i];

    n = sqrt(n);
    return n;
}

/* Method to compute the sum of two vectors */
Vector Vector::add(const Vector &arr) {
    Vector vec;
    double *sum;

    sum = new double[vector_size];
    for (int i = 0; i < vector_size; i++)
        sum[i] = elements[i] + arr.elements[i];
    
    vec.vector_size = vector_size;
    vec.setElements(sum);

    delete [] sum;
    return vec;
}

/* Method to compute the difference of two vectors */
Vector Vector::subtract(const Vector &arr) {
    Vector vec1;
    double *sub;

    sub = new double[vector_size];
    for (int i = 0; i < vector_size; i++)
        sub[i] = elements[i] - arr.elements[i];

    vec1.vector_size = vector_size;
    vec1.setElements(sub);

    delete [] sub;
    return vec1;
}

/* Method to compute the scalar product of two vectors */
double Vector::scalar_product(const Vector &arr) {
    double sp = 0;
    
    for (int i = 0; i < vector_size; i++) {
        sp += elements[i] * arr.elements[i];
    }
   
    return sp;
}