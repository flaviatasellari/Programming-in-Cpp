/*
   CH-230-A
   a11_p2.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

/*      WIZARD      */
class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3) {
    cout << "The wizard created." << endl;
}  

/* Method */
void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard() {
    cout << "Wizard disappeared" <<endl;
}

/*     WINX      */
class Winx : public Creature {
	public:
		Winx();
        ~Winx();
		void fly() const;

	private:
		int fly_factor;
};

Winx::Winx() : fly_factor(2) {
    cout << "The winx created." << endl;
}

/* Method */
void Winx::fly() const {
    cout << "flying " << (fly_factor * distance) << " meters!" << endl;
}

Winx::~Winx() {
    cout << "Winx diasppeared" << endl;
}

/*     YETI     */
class Yeti : public Creature {
	public:
		Yeti();
        ~Yeti();
		void ski() const;

	private:
		int ski_factor;
};

Yeti::Yeti() : ski_factor(10) {
    cout << "The yeti created." << endl;
}

/* Method */
void Yeti::ski() const {
    cout << "skiing " << (ski_factor * distance) << " meters!\n" << endl;
}

Yeti::~Yeti() {
    cout << "Yeti disappeared" << endl;
}

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Winx.\n";
    Winx wx;
    wx.run();
    wx.fly();

    cout << "\nCreating a Yeti.\n";
    Yeti y;
    y.run();
    y.ski();

    return 0;
} 