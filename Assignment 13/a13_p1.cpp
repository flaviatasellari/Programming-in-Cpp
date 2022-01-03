/*
   CH-230-A
   a13_p1.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/
 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 
int main() {
    string file1, file2;
    
    /* Get the name of the file from the keyboard */
    getline (cin, file1);
 
    ifstream in (file1.c_str());
    file2 = file1 + "_copy.txt";
    ofstream out (file2.c_str());
 
    string x;
 
    if (in && out) {
        do {
            getline(in, x);
            out << x;
            out << endl;
        }
        while (in.eof() != true);
        cout << "Copying...";
        }
    
    else {
            cout << "Error!" <<  endl;
        }
 
    /* Close files */
    in.close();
    out.close();
}
