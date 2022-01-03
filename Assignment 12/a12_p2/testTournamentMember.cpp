/*
   CH-230-A
   a12_p2.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main (int argc, char**argv) {
    /* First instance */
    TournamentMember mem1 ("Sergio", "Ramos", "1986-03-30", "Spain", 
                           "Real Madrid"); 
    cout << "First member:" << endl;
    mem1.print(); 
    
    /* Using copy constructor */
    TournamentMember mem2 (mem1); 
    cout << "A copy of first member:" << endl;
    mem2.other_location ("France"); // changing location
    mem2.print();
    
    /* Second instance */
    TournamentMember mem3;
    mem3.setFirst_name ("Cristiano");
    mem3.setLast_name ("Ronaldo");
    mem3.setBirth_date ("1985-02-05");
    mem3.setOrigin_country ("Portugal");
    mem3.setTeam ("Juventus");
    mem3.other_location ("Italy"); // changing location
    cout << "Second member:" << endl;
    mem3.print();

    return 0;
}