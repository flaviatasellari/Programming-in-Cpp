/*
   CH-230-A
   a13_p3.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main () {
    int n;
    cin >> n;

    ofstream output; 
    
    output.open ("concatn.txt", ios::binary|ios::out);

    if (!output.is_open()) {
           cout << "Cannot open file!" << endl;
           exit(1);
        }

    for (int i=0; i<n; i++) {
        /* Files names */
        string files;
        cin >> files;
        
        ifstream input;

        input.open (files.c_str(), ios::binary|ios::in);

        if (!input.is_open()) { 
           cout << "Cannot open file!" << endl;
           exit(1);
        }
        
        input.seekg (0, ios::end);
        int l = input.tellg();
        input.seekg (0, ios::beg);
        
        char* mem;
        mem = new char [l];
        
        input.read (mem,l); // binary read
        output.write (mem, l); // binary write
        
        /* Adding a newline to separate the contents */
        char nl = '\n';
        output.write (&nl, sizeof(nl));
        
        delete [] mem;

        input.close();
    }
    output.close();
    
    return 0;
}