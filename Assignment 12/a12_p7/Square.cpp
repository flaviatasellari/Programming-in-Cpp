#include "Square.h"
#include <iostream>

Square::Square(const char *n, double a):
               Area(n), Rectangle(n, a, a) {
    side = a;
}

Square::~Square() {}

double Square::calcArea() const {
    std::cout << "\ncalcArea of Square...";
	return side * side;
}

double Square::calcPerimeter() const {
    std::cout << "\ncalcPerimeter of Square...";
	return side * 4;
}