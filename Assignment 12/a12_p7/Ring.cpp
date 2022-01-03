#include "Ring.h"
#include <iostream>

Ring::Ring(const char *n, double outer, double inner)
					: Area(n), Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
    std::cout << "\ncalcArea of Ring..."; 
	return (Circle::calcArea()-
		(innerradius * innerradius * 3.141593));
}

double Ring::calcPerimeter() const {
    std::cout << "\ncalcPerimeter of Ring...";
	
    return (Circle::calcPerimeter() + (innerradius * 2 * 3.141593));
}