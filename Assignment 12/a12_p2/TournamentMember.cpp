/*
   CH-230-A
   a12_p2.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

char TournamentMember::location[30] = "Spain";

/* Default constructor */
TournamentMember::TournamentMember () {
    cout << "Call default constructor..." << endl;
}

/* Parametric constructor */
TournamentMember::TournamentMember(const char* first, const char* last, 
                                   const char* birth, string co, string t) :
                                   origin_country(co), team(t) {
        int i;
        for (i = 0; i < 36; i++) {
            first_name[i] = first[i];
        }
        
        for (i = 0; i < 36; i++) {
            last_name[i] = last[i];
        }
        
        for (i = 0; i < 11; i++) {
            birth_date[i] = birth[i];
        }
        
        cout << "Call parametric constructor..." << endl;
}

/* Copy constructor */
TournamentMember::TournamentMember(const TournamentMember& c) {
    int i;
    for (i = 0; i < 36; i++) {
        first_name[i] = c.first_name[i];
    }

    for (i = 0; i < 36; i++) {
        last_name[i] = c.last_name[i];
    }

    for (i = 0; i < 11; i++) {
        birth_date[i] = c.birth_date[i];
    }
    
    origin_country = c.origin_country;
    team = c.team;
    cout << "Call copy constructor..." << endl;
}

/* Destructor */
TournamentMember::~TournamentMember() {
    cout << "Call destructor..." << endl;
}

void TournamentMember::other_location(const char* new_location) {
    for (int i = 0; i < 30; i++) {
        location[i] = new_location[i];
    }
}

void TournamentMember::print() {
    cout << endl;
    cout << "First name: " << first_name << endl;
    cout << "Last name: " << last_name << endl;
    cout << "Date of birth: " << birth_date << endl;
    cout << "Country of origin: " << origin_country << endl;
    cout << "Team: " << team << endl;
    cout << "Location: " << location << endl;
    cout << endl;
}