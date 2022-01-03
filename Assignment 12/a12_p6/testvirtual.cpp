/*
   CH-230-A
   a12_p6.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/* Inheritance diagram
                    
                    |  Area  |
                      |    |
            __________|    |__________
           |                          |
           |                          |
       | Circle |                | Rectangle |
           |                          |
           |                          |
           |                          |
       |  Ring  |                |  Square  |
                         
*/

const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)
    /* A list of pointers that contain derived classes of class Area. */
	int index = 0, k = 0;						// (2)
    /* Some variables declared which will be used in the while loop */
    double sum_area = 0.0, sum_perimeter = 0.0; // (3)
    /* Firstly, the initial sum and perimeter have to be zero. Then, the areas 
    and perimeters of the shapes are added to these initial sum and perimeter 
    in order to calculate the total area and perimeter. */
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
    /* Create a ring and set the color blue, the outer radius 5 and the inner 
    radius 2. Then create some other objects and set properties */
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square brown_square("BROWN", 3);
    /* Setting the elements of the list
    The first one is the blue ring */
	list[0] = &blue_ring;                       // (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &brown_square;
    /* While loop. Index must be smaller than 7 */
	while (index < num_obj) {		            // (7)
		(list[index])->getColor();	            // (8)
        /* Getting the color of each element of the list.
           Summing up all the areas */
		sum_area += (list[index++])->calcArea();
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
    /* Print on the screen the sum of the areas of the shapes  */

	while (k < num_obj) {
		(list[k])->getColor();
		sum_perimeter += (list[k++])->calcPerimeter();
	}

	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;
	return 0;
}

