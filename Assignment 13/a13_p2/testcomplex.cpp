/*
   CH-230-A
   a13_p2.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Complex.h"
using namespace std;

int main () {
    /* Open the input files */
    ifstream in1;

    in1.open ("in1.txt", ios::binary|ios::in);
    
    if (!in1.is_open()) { 
       cout << "Cannot open file!" << endl;
       exit(1);
    }
    
    ifstream in2;

    in2.open("in2.txt", ios::binary|ios::in);

    if (!in2.is_open()) {
        cout << "Cannot open file!" << endl;
        exit(1);
    }
    
    /* Open the output file */
    ofstream out; 
    
    out.open ("output.txt", ios::binary|ios::out);

    if (!out.is_open()) {
        cout << "Cannot open file!" << endl;
        exit(1);
    }
    
    /* Assign the values of the input files to the complex numbers */
    Complex comp1, comp2;
    in1 >> comp1;
    in2 >> comp2;

    Complex comp_sum = comp1 + comp2;
    Complex comp_diff = comp1 - comp2;
    Complex comp_prod = comp1 * comp2;

    /* Write the results in the output file */
    out << "The sum of the two complex numbers: " << comp_sum;
    out << "The difference of the two complex numbers: " << comp_diff;
    out << "The product of the two complex numbers: " << comp_prod;

    /* Print the results on the screen */
    cout << "The sum of the two complex numbers: " << comp_sum;
    cout << "The difference of the two complex numbers: " << comp_diff;
    cout << "The product of the two complex numbers: " << comp_prod;

    in1.close();
    in2.close();
    out.close();
    return 0;
}