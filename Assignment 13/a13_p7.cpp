/*
   CH-230-A
   a13_p7.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;

/* OwnException class */
class OwnException : public exception {
    private:
        string str;

    public:
        OwnException (string str1) {
            str = str1;
            cout << str << endl;
        }

        /* what() method */
        const char* what() const throw () {
            return "OwnException\n";
        }

        virtual ~OwnException() throw() {}
};

/* Function to throw 4 exceptions types */
void exceptions (int element) {
    switch (element) {
        case 1:
            throw 'a';
            break;
        
        case 2:
            throw 12;
            break;
        
        case 3:
            throw true;
            break;
        
        default:
            throw OwnException ("Default case exception");
    }
}

int main () {
    int x1 = 1;
    int x2 = 2;
    int x3 = 3;
    int x4 = 4;
    
    /* Try and catch blocks */
    try {
        exceptions (x1);
    } 
    catch (char type1) {
        cerr << "Caught in main: " << type1 << endl;
    }

    try {
        exceptions (x2);
    } 
    catch (int type2) {
        cerr << "Caught in main: " << type2 << endl;
    }
    
    try {
        exceptions(x3);
    } 
    catch (bool type3) {
        cerr << "Caught in main: " << type3 << endl;
    }
    
    try {
        exceptions(x4);
    }
    catch (OwnException& type4) {
        cerr << "Caught in main: " << type4.what() << endl;
    }

    return 0;
}