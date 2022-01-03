/*
   CH-230-A
   a10_p3.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>

using namespace std;

class City {
        private:
                string city_name;
                int population;
                string mayor;
                double area;

        public:
                /* Setter methods */
                void setCityName (string new_city_name);
                void setPopulation (int newpopulation);
                void setMayor (string newmayor);
                void setArea (double newarea);
                
                /* Getter methods */
                string getCityName();
                int getPopulation();
                string getMayor();
                double getArea();

                /* Method for printing */
                void print();
};