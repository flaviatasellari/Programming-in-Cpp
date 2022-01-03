/*
   CH-230-A
   a9_p6.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

/* The function to find the first positive and even value in the array */
int myfirst (int array[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (array[i] > 0 && array[i] % 2 == 0) {
            return array[i];
        }
    }
    return -1;
}

/* The function to find the first negative element without a fractional part */
double myfirst (double array[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (array[i] < 0 && ((int) array[i] == (double) array[i])) {
            return array[i];
        }
    }
    return -1.1;
}

/* The function to find the first consonant in the array */
char myfirst (char array[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (((array[i]>=65 && array[i]<=90)||(array[i]>=97 && array[i]<=122))
        && ((array[i]!=65)&&(array[i]!=69)&&(array[i]!=73)&&(array[i]!=79)
        && (array[i]!=85)&&(array[i]!=89)&&(array[i]!=97)&&(array[i]!=101)
        && (array[i]!=105)&&(array[i]!=111)&&(array[i]!=117)&&(array[i]!=121)))
        {
            return array[i];
        }
    }
    return '0';
}

/* The program which illustrates the effect of the functions */
int main () {
    int arr1[4] {7, -50, 8, 17};
    double arr2[7] {0.7, 3.33, -5.8, -2, -6.23, 8.72};
    char arr3[6] {'a', 'e', 'k', 'm', 'n', 'o'};

    cout << myfirst (arr1, 4) << endl;
    cout << myfirst (arr2, 7) << endl;
    cout << myfirst (arr3, 6) << endl;

    return 0;
}