/*
   CH-230-A
   a11_p6.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main () {
    int n;
    cout << "Size: ";
    cin >> n;

    Vector v1,v2;
    /* Set the size of vectors */
    v1.setVectorSize(n);
    v2.setVectorSize(n);
    
    double *array;
    cout << "Enter the first vector:" << endl;
    array = new double[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    /* Elements of first vector */
    v1.setElements(array);
    v1.print();

    cout << endl << "Enter the second vector:" << endl;
    for (int i = 0; i < n; i++)
        cin >> array[i];
    
    /* Elements of second vector */
    v2.setElements(array);
    v2.print();
    
    delete []array;

    cout << "\nThe norm of the second vector:" <<endl;
    cout << v2.norm() << endl;

    cout << "\nThe vector created from the addition of the two vectors:"
         << endl;
    (v1.add(v2)).print();
    
    cout << "\nThe vector created from the subtraction of the two vectors:" 
         << endl;
    (v1.subtract(v2)).print();
    
    cout << "\nThe scalar product of the two vectors:" << endl;
    cout << v1.scalar_product(v2) << endl;
    
    return 0;
}