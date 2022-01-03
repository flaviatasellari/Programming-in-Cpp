#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Area.h"

class Rectangle : public virtual Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
        // the perimeter
		double calcPerimeter() const;
	private:
		double length;
		double width;
};

#endif