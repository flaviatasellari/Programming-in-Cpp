#ifndef RING_H
#define RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
        // the perimeter
		double calcPerimeter() const; 
	private:
		double innerradius;
};

#endif