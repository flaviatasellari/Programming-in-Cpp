#ifndef CIRCLE_H
#define CIRCLE_H
#include "Area.h"

class Circle : public virtual Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
        // the perimeter
		double calcPerimeter() const; 
	private:
		double radius;
};

#endif