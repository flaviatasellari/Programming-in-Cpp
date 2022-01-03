#include "Circle.h"
#include <iostream>

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "\ncalcArea of Circle...";
	return radius * radius * 3.141593;
}

double Circle::calcPerimeter() const {
    std::cout << "\ncalcPerimeter of Circle..."; 
	return 2 * radius * 3.141593;
}