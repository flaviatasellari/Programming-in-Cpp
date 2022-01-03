/*
   CH-230-A
   a10_p3.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

void City::setCityName (string new_city_name) {
        city_name = new_city_name;
}

void City::setPopulation (int newpopulation) {
        population = newpopulation;
}

void City::setMayor (string newmayor) {
        mayor = newmayor;
}

void City::setArea (double newarea) {
        area = newarea;
}

string City::getCityName () {
        return city_name;
}

int City::getPopulation () {
        return population;
}

string City::getMayor () {
        return mayor;
}

double City::getArea () {
        return area;
}

void City::print () {
        cout 
        << 
        "The city is " 
        << city_name << 
        ". " 
        << population << 
        " people live here. The mayor is " 
        << mayor << 
        ". Its area is " 
        << area <<
        " km2." 
        << endl;
}
