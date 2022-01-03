/*
   CH-230-A
   a12_p7.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/* 25 objects */
const int num_obj = 25;
int main() {
    Area *list[num_obj];
    char color[4][11] = {"RED", "BLACK", "VIOLET", "BLUE"};

	int i, k, l, h;
	int counter = 0;

    srand(static_cast<unsigned int>(time(0)));

	while (counter < num_obj) { 
    /* We have an array of four colors so choose a random number btw 0 and 3 */
	i = (rand() % 4); 
    /* Choose a number from 5 to 100 */
	k = (rand() % 96) + 5; 
    /* We have four classes so choose a number btw 0 and 3 */
	l = (rand() % 4);
    /* Two classes need 2 int parameters so choose a number from 5 to 100 */
	h = (rand() % 96) + 5;

	if (l == 0) {
	    /* Outer radius is always greater than inner radius */
        if (k >= h) {
            Ring ring1 (color[i], k, h);

            list[counter] = &ring1;
            cout << "\nColor of ring: ";
            list[counter]->getColor();
            cout << "\nArea of ring: " 
            << list[counter] -> calcArea() << endl;
            cout << "\nPerimeter of ring: " 
            << list[counter] -> calcPerimeter() << endl;
        }

        if (k < h) {
            Ring ring1 (color[i], h, k);

            list[counter] = &ring1;
            cout << "\nColor of ring: ";
            list[counter]->getColor();
            cout << "\nArea of ring: " 
            << list[counter] -> calcArea() << endl;
            cout << "\nPerimeter of ring: " 
            << list[counter] -> calcPerimeter() << endl;
        }

	}

	if (l == 1) {
        Circle circle1 (color[i], k);

        list[counter] = &circle1;
        cout << "\nColor of circle: "; 
        list[counter]->getColor();
        cout << "\nArea of circle: " 
        << list[counter] -> calcArea() << endl; 
        cout << "\nPerimeter of circle: " 
        << list[counter] -> calcPerimeter() << endl; 
	}

	if (l == 2) {
	    Rectangle rectangle1 (color[i], k, h);

        list[counter] = &rectangle1;
        cout << "\nColor of rectangle: ";
        list[counter]->getColor();
        cout << "\nArea of rectangle: " 
        << list[counter] -> calcArea() << endl;
        cout << "\nPerimeter of rectangle: " 
        << list[counter] -> calcPerimeter() << endl;
	}

	if (l == 3) {
	    Square square1 (color[i], k);

        list[counter] = &square1;
        /* Color */
        cout << "\nColor of square: ";
        list[counter]->getColor();
        /* Area */
        cout << "\nArea of square: " 
        << list[counter] -> calcArea() << endl;
        /* Perimeter */
        cout << "\nPerimeter of square: " 
        << list[counter] -> calcPerimeter() << endl;
	}
	
    cout << endl;
	counter++;
	}
	
    return 0;
}