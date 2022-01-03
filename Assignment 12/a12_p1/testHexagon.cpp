/*
   CH-230-A
   a12_p1.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main () {
	/* First instance */
	Hexagon h1 ("First hexagon", 0, 0, 6, 9, "blue");
	h1.printName();
	cout << "The side: " << h1.getSide() << endl;
	cout << "The color: " << h1.getColor() << endl;
    cout << "The perimeter: " << h1.perimeter() << endl;
	cout << "The area: " << h1.area() << endl << endl;

	/* Second instance */
	Hexagon h2 ("Second hexagon", 0, 0, 6, 15, "green");
	h2.printName();
	cout << "The side: " << h2.getSide() << endl;
	cout << "The color: " << h2.getColor() << endl;
    cout << "The perimeter: " << h2.perimeter() << endl;
	cout << "The area: " << h2.area() << endl << endl;

	/* Third instance */
	Hexagon h3 (h2); // copy of second hexagon
    cout << "Third hexagon" << endl;
	cout << "The side: " << h3.getSide() << endl;
	cout << "The color: " << h3.getColor() << endl;
    cout << "The perimeter: " << h3.perimeter() << endl;
	cout << "The area: " << h3.area() << endl << endl;
	
    return 0;
}