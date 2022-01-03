/*
   CH-230-A
   a12_p3.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main () {
    /* Moving all the players to another location */
    TournamentMember::other_location("Hamburg");

    /* First player */
    Player first_player("Sergio", "Ramos", "1986-03-30", "Spain", 
                        "Real Madrid", 4, "centre back", 10, "right");
    cout << endl << "First player:" << endl;
    first_player.print();
    first_player.print1();

    /* Second player */
    Player second_player("Cristiano", "Ronaldo", "1985-02-05", "Portugal", 
                         "Juventus", 7, "forward", 23, "right");
    cout << endl << "Second player:" << endl;
    /* Incrementing the number of goals scored by the player */
    second_player.increase(); 
    second_player.print();
    second_player.print1();

    /* Third player */
    Player third_player("Karim", "Benzema", "1987-12-19", "France", 
                        "Real Madrid", 9, "striker", 17, "left");
    cout << endl << "Third player:" << endl;
    third_player.print();
    third_player.print1();
    cout << endl;

    return 0;
}