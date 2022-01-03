/*
   CH-230-A
   a11_p3.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>

using namespace std;

/* Classes declarations */

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

/*      WIZARD      */
class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

/*      WINX      */
class Winx : public Creature {
	public:
		Winx();
        ~Winx();
		void fly() const;

	private:
		int fly_factor;
};

/*     YETI     */
class Yeti : public Creature {
	public:
		Yeti();
        ~Yeti();
		void ski() const;

	private:
		int ski_factor;
};