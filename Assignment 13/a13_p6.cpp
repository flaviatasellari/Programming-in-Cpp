/*
   CH-230-A
   a13_p6.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> int_vector;

    for (int i = 0; i < 20; i++)
        int_vector.push_back(8);
    
    /* Using try and catch block */
    try {
        /* Trying to access the 21th element */
        int_vector.at(21);
    }

    catch (const out_of_range& out) {
        /* Printing */
        cerr << out.what() << endl;
    }
    
    return 0;
}