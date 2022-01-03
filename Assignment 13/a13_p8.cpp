/*
   CH-230-A
   a13_p8.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;

/*          MOTOR        */
class Motor {
    public:
    
    Motor() {}
    ~Motor() {}
    
    /* Throw exception */
    virtual const char* what() const throw () {
        return "This motor has problems";
    }
};

/*          CAR        */
class Car : public Motor {
    public:
    
    Car() {}
    ~Car() {}
};

/*          GARAGE            */
class Garage : public Car {
    private:
    string str;
    
    public:
    
    Garage (string str1) {
        str = str1;
        cout << str << endl;
    }
    
    Garage() try : Car() {
        /* Throw exception */
        throw Garage ("The car in this garage has problems with the motor");
    } 
    /* Catch exception from MOTOR class */
    catch (Motor& mot) {
        cerr << mot.what() << endl;
    }
};

int main () {
    /* Catch exception from GARAGE class */
    try {
        Garage gar;
    } 
    catch (Garage& gar) {
        cout << gar.what() << endl; 
    }
    
    return 0;
}