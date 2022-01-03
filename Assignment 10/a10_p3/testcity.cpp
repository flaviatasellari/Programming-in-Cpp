/*
   CH-230-A
   a10_p3.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

int main (int argc, char** argv ) {
        City c1, c2, c3;

        /* Creating three instances */
        c1.setCityName("Bremen");
        c1.setPopulation(569352);
        c1.setMayor("Andreas Bovenschulte");
        c1.setArea(326.7);

        c2.setCityName("Paris");
        c2.setPopulation(2161000);
        c2.setMayor("Anne Hidalgo");
        c2.setArea(105.4);

        c3.setCityName("London");
        c3.setPopulation(8982000);
        c3.setMayor("Sadiq Khan");
        c3.setArea(1572);

        /* Print */
        c1.print();
        c2.print();
        c3.print();

        return 0;
}