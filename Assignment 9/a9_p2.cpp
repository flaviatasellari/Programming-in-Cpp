/*
   CH-230-A
   a9_p2.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    double x;
    string s;

    cout << "Enter an integer value:" << endl;
    cin >> n;
    cout << "Enter a double value:" << endl;
    cin >> x;
    cout << "Enter a string:" << endl;
    cin >> s;
    
    /* The loop to repeat the printing */
    int i = 0;
    while (i < n) {
        cout << s;
        cout << ":";
        cout << x << endl;
        i++;
    }

    return 0;
}