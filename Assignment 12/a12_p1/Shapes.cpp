/*
   CH-230-A
   a12_p1.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

/*               HEXAGON               */

/* Parametric constructor */
Hexagon::Hexagon(const string& n, double nx, double ny, int nl, double newside, 
                 const string& newcolor) : RegularPolygon(n, nx, ny, nl) {
                     side = newside;
                     color = newcolor;
}

/* Copy constructor */
Hexagon::Hexagon(const Hexagon& h): 
RegularPolygon(h.name, h.x, h.y, h.EdgesNumber) {
    side = h.side;
	color = h.color;
}

/* Destructor */
Hexagon::~Hexagon() {}

/* Setters */
void Hexagon::setSide(double newside) {
	side = newside;
}

void Hexagon::setColor(const string& newcolor) {
	color = newcolor;
}

/* Getters */
double Hexagon::getSide() {
	return side;
}
string Hexagon::getColor() {
	return color;
}

/* Method to find the perimeter */
double Hexagon::perimeter() {
	return 6 * side;
}

/* Method to find the area */
double Hexagon::area() {
	return 3 * sqrt(3) * side * side / 2;
}
