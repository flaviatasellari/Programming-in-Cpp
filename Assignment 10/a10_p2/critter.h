/*
   CH-230-A
   a10_p2.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	std::string eye_color;
	std::string hair_color;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	/* New setter methods */
	void setEyeColor(std::string& neweye_color);
	void setHairColor(std::string& newhair_color);
	// getter method
	int getHunger();
    /* New getter methods */
	std::string getEyeColor();
	std::string getHairColor();
	// service method
	void print();
};