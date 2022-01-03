/*
   CH-230-A
   a9_p5.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    string name;
    cout << "Your name: ";
    getline (cin, name);

    /* A random number between 1 and 100 */
    int RandNo;
    srand (static_cast < unsigned int > (time(0)));
    RandNo = (rand() % 100) + 1;

    cout << "Guess a number between 1 and 100:" << endl;
    int num;
    int count = 1;
    while (true) {
        cin >> num; // Get input everytime the player is guessing wrong 
        /* The case when the number is too low */
        if (num < RandNo) {
            cout << "The number is too low. Try again." << endl;
            count++;
        }
        /* The case when the number is too high */
        else if (num > RandNo) {
            cout << "The number is too high. Try again."<< endl;
            count++;
        }
        else if (num == RandNo) {
            /* The case when the number is found in the first try */
            if (count == 1) {
                cout << "Yayy! You found the number in 1 try." << endl;
            }
            /* The case when the number is found after some tries */
            else {
                cout<<"Yayy! You found the number in "<<count<<" tries."<<endl;
            }
            break;
        }
    }
    return 0;
}