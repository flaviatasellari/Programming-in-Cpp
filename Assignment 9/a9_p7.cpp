/*
   CH-230-A
   a9_p7.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

/* The function to swap the integers */
void swapping (int &n1 , int &n2) {
/* Real call-by-reference */
    int n = n1;
    n1 = n2;
    n2 = n;
}

/* The function to swap the floats */
void swapping (float &n3 , float &n4) {
    float n = n3;
    n3 = n4;
    n4 = n;
}

/* The function to swap the pointers to char */
void swapping (const char* &s1, const char* &s2) {
    const char *s = s1;
    s1 = s2;
    s2 = s;
}

int main (void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    /* Call the functions */
    swapping (a, b);
    swapping (x, y);
    swapping (str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}