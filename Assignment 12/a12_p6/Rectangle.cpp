#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
    std::cout << "calcArea of Rectangle..."; 
	return length*width;
}

double Rectangle::calcPerimeter() const {
    std::cout << "calcPerimeter of Rectangle...";
	return (length + width) * 2;
}