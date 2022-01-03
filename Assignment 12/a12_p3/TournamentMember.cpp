/*
   CH-230-A
   a12_p3.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

char TournamentMember::location[30] = "Spain";

/* Default constructor */
TournamentMember::TournamentMember() {
    cout << "Call default constructor..." << endl;
}

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
    int i;
    for (i = 0; i < 30; i++) {
        location[i] = new_location[i];
    }
}

void TournamentMember::print(){
    cout << endl;
    cout << "First name: " << first_name << endl;
    cout << "Last name: " << last_name << endl;
    cout << "Date of birth: " << birth_date << endl;
    cout << "Country of origin: " << origin_country << endl;
    cout << "Team: " << team << endl;
    cout << "Location: " << location << endl;
}

/*          PLAYER CLASS           */

Player::Player()
{
    cout << "Call default constructor 1..." << endl;
}

Player::Player(const char* first, const char* last, const char* birth, 
               string co, string t, int n, string p, int ng, string ft):
               TournamentMember(first, last, birth, co, t){
        number = n;
        position = p;
        no_goals = ng;
        foot_type = ft;
        cout << "Call parametric constructor 1..." << endl;
}

Player::Player(const Player& copy) {
    int i;
    for (i = 0; i < 36; i++) {
        first_name[i] = copy.first_name[i];
    }

    for (i = 0; i < 36; i++) {
        last_name[i] = copy.last_name[i];
    }

    for (i = 0; i < 11; i++) {
        birth_date[i] = copy.birth_date[i];
    }

    origin_country = copy.origin_country;
    team = copy.team;
    number = copy.number;
    position = copy.position;
    no_goals = copy.no_goals;
    foot_type = copy.foot_type;
    cout << "Call copy constructor 1..." << endl;
}

Player::~Player() {
    cout << "Call destructor 1..." << endl;
}

void Player::print1() {
    cout << "Jersey number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Number of goals scored: " << no_goals << endl;
    cout << "Left or right-footed: " << foot_type << endl;
    cout << endl;
}

void Player::increase() {
    no_goals++;
}