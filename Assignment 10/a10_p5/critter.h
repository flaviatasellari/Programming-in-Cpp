/*
   CH-230-A
   a10.p5.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;

class Critter
{
	private:  
		string name;
		double hunger;
		int boredom;
		double height;

	public:
        /* Constructors */
        Critter ();
        Critter (string newname);
        Critter (string newname, 
                int newhunger, 
                int newboredom, 
                double newheight = 10);
                
        /* Setter methods */
        void setName (string& newname);
        void setHunger (int newhunger);
        void setBoredom (int newboredom);
        void setHeight (double newheight);

        /* Getter methods */
        string getName();
        double getHunger();
        int getBoredom();
        double getHeight();

        void print();

        /* Methods to convert the numbers */
        double IntToDouble(int);
        int DoubleToInt(double);
};
