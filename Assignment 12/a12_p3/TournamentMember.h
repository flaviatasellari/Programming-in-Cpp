/*
   CH-230-A
   a12_p3.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H

using namespace std;

/*         MEMBER CLASS        */
class TournamentMember
{
    protected:
        char first_name[36];
        char last_name[36];
        char birth_date[11];
        static char location[30];
        string origin_country;
        string team;

    public:
        /* Constructors */
        TournamentMember();
        TournamentMember(const char*, const char*, const char*, string, string);
        TournamentMember(const TournamentMember&);
        virtual ~TournamentMember();

        /* Setters */
        void setFirst_name(const char* new_first_name);
        void setLast_name(const char* new_last_name);
        void setBirth_date(const char* new_birth_date);
        void setOrigin_country(string new_origin_country);
        void setTeam(string new_team);
     
        /* Getters */
        string getFirst_name();
        string getLast_name();
        string getBirth_date();
        string getOrigin_country();
        string getTeam();
        
        /* Methods */
        void print();
        static void other_location(const char*);
};

/*           PLAYER CLASS          */
class Player : public TournamentMember {
    private:
        int number;
        string position;
        int no_goals;
        string foot_type;
    public:
        /* Constructors */
        Player();
        Player(const char*, const char*, const char*, string, string,
               int, string, int, string);
        Player(const Player&);
        virtual ~Player();

        /* Setters */
        void setNumber(int new_number);
        void setPosition(string new_position);
        void setFoot_type(string new_foot_type);
        
        /* Getters */
        int getNumber();
        string getPosition();
        string getFoot_type();

        /* Methods */
        void print1();
        void increase();
};

/* Inline setter methods */

inline void TournamentMember::setFirst_name(const char* new_first_name) {
    int i;
    for (i = 0; i < 36; i++) {
        first_name[i] = new_first_name[i];
    }
}

inline void TournamentMember::setLast_name(const char* new_last_name) {
    int i;
    for (i = 0; i < 36; i++) {
        last_name[i] = new_last_name[i];
    }
}

inline void TournamentMember::setBirth_date(const char* new_birth_date) {
    int i;
    for (i = 0; i < 11; i++) {
        birth_date[i] = new_birth_date[i];
    }
}

inline void TournamentMember::setOrigin_country(string new_origin_country) {
    origin_country = new_origin_country;
}

inline void TournamentMember::setTeam(string new_team) {
    team = new_team;
}


/* Inline getter methods */

inline string TournamentMember::getFirst_name() {
    return first_name;
}

inline string TournamentMember::getLast_name() {
    return last_name;
}

inline string TournamentMember::getBirth_date() {
    return birth_date;
}

inline string TournamentMember::getOrigin_country() {
    return origin_country;
}

inline string TournamentMember::getTeam() {
    return team;
}

/*         PLAYER CLASS         */

/* Inline setter methods */

inline void Player::setNumber(int new_number) {
    number = new_number;
}

inline void Player::setPosition(string new_position) {
    position = new_position;
}

inline void Player::setFoot_type(string new_foot_type) {
    foot_type = new_foot_type;
}

/* Inline getter methods */

inline int Player::getNumber() {
    return number;
}

inline string Player::getPosition() {
    return position;
}

inline string Player::getFoot_type() {
    return foot_type;
}

#endif // TOURNAMENTMEMBER_H