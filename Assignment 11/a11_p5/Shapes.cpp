/*
   CH-230-A
   a11_p5.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include "Shapes.h"
#include <iostream>
#include <cmath>

using namespace std;

/*             SHAPE           */

Shape::Shape(const string& n) : name(n) {}

/*  Default constructor */
Shape::Shape() {
    name = "default";
}

/* Copy constructor */
Shape::Shape(const Shape& a) {
    name = a.name;
}

void Shape::setName(string& newname) {
    name = newname;
}

string Shape::getName() {
    return name;
}

/* Method to print */
void Shape::printName() const {
    cout << name << endl;
}

/*            CENTERED SHAPE            */

/* Default constructor */
CenteredShape::CenteredShape(): Shape() {
    x = 0;
    y = 0;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}

/* Copy constructor */
CenteredShape::CenteredShape(const CenteredShape& a) {
    x = a.x;
    y = a.y;
}

void CenteredShape::set_x(double new_x) {
    x = new_x;
}

void CenteredShape::set_y(double new_y) {
    y = new_y;
}

double CenteredShape::get_x() {
    return x;
}

double CenteredShape::get_y() {
    return y;
}

/*                REGULAR POLYGON            */

/* Default constructor */
RegularPolygon::RegularPolygon() : CenteredShape() {
    EdgesNumber = 3;
}


RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}

/* Copy constructor */
RegularPolygon::RegularPolygon(const RegularPolygon& a){
    EdgesNumber = a.EdgesNumber;
}

void RegularPolygon::setEdgesNumber(int new_edgesnumber) {
    EdgesNumber = new_edgesnumber;
}

int RegularPolygon::getEdgesNumber() {
    return EdgesNumber;
}

/*             CIRCLE             */

/* Default constructor */
Circle::Circle() : CenteredShape() {
    Radius = 1;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
    Radius = r;
}

/* Copy constructor */
Circle::Circle(const Circle& a) {
    Radius = a.Radius;
}

void Circle::setRadius(double newradius) {
    Radius = newradius;
}

double Circle::getRadius() {
    return Radius;
}

/* Methods to find the perimeter and area */
double Circle::perimeter() {
    return 2 * M_PI * Radius;
}

double Circle::area() {
    return M_PI * Radius * Radius;
}

/*               RECTANGLE               */

/* Default constructor */
Rectangle::Rectangle() : RegularPolygon() {
    width = 1;
    height = 1;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, 
                     double nheight) : RegularPolygon(n,nx,ny,4)
{
    width = nwidth;
    height = nheight;
}

/* Copy constructor */
Rectangle::Rectangle(const Rectangle& a) {
    width = a.width;
    height = a.height;
}

void Rectangle::setWidth(double newwidth) {
    width = newwidth;
}

void Rectangle::setHeight(double newheight) {
    height = newheight;
}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::getHeight() {
    return height;
}

/* Methods to find the perimeter and area */
double Rectangle::perimeter() {
    return (2 * height) + (2 * width);
}

double Rectangle::area() {
    return height * width;
}

/*             SQUARE             */

/* Default constructor */
Square::Square() {
    equalside = 1;
}

Square::Square(const string& n, double nx, double ny, double nside) :
    Rectangle(n, nx, ny, nside, nside)
{
    equalside = nside;
}

/* Copy constructor */
Square::Square(const Square& a) {
    equalside = a.equalside;
}

void Square::setEqualSide(double new_equalside) {
    equalside = new_equalside;
}

double Square::getEqualSide() {
    return equalside;
}

/* Methods to find the perimeter and area */
double Square::perimeter() {
    return 4 * equalside;
}

double Square::area() {
    return equalside * equalside;
}