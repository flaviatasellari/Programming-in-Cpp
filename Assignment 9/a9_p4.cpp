/*
   CH-230-A
   a9_p4.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

/* The function to find the difference between the second and first value */
int mycount (int num1, int num2) {
        return num2 - num1;
}

/* The function to count the number of occurrences of a character in a string */
int mycount (string s, char ch ) {
        int i;
        int count = 0;
        int size = s.length();
        
        for (i = 0; i < size; i++) {
            if (s[i] == ch) {
            count++;
            }
        }
        return count;
}

int main () {
        int num1, num2;
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;
        cout << mycount (num1, num2) << endl; // Call the function for integers

        string s;
        char ch;
        getchar();
        cout << "Enter a string: " ;
        getline(cin, s);
        cout << "Enter character: " ;
        cin >> ch;
        cout << mycount (s, ch) << endl; // Call the function for string

        return 0;
}