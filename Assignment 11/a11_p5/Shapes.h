/*
   CH-230-A
   a11_p5.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef SHAPES_H
#define SHAPES_H
#include <string>

using namespace std;

class Shape {  // base class
    private:   // private access modifier: could also be protected
        string name;   // every shape will have a name
    public:
        Shape(const string&);  // builds a shape with a name
        Shape();                    // empty shape
        Shape(const Shape&);        // copy constructor
        void printName() const ;    // prints the name
        /* Setter */
        void setName(string& newname);
        /* Getter */
        string getName();           
};

class CenteredShape : public Shape {  // inherits from Shape
    private:
        double x,y;  // the center of the shape
    public:
        CenteredShape(const string&, double, double); //usual three constructors
        CenteredShape();
        CenteredShape(const CenteredShape&);
		void move(double, double); //moves the shape, i.e. it modifies it center
        
        /* Setters */
        void set_x(double new_x);
        void set_y(double new_y);
        /* Getters */
        double get_x();
        double get_y();
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape { 
    private:
        int EdgesNumber;
    public:
        RegularPolygon(const string&, double, double, int);
        RegularPolygon();
        RegularPolygon(const RegularPolygon&);
        /* Setter */
        void setEdgesNumber(int new_edgesnumber);
        /* Getter */
        int getEdgesNumber();
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {  
    private:
        double Radius;
    public:
        Circle(const string&, double, double, double);
        Circle();
        Circle(const Circle&);
        
        /* Setter */
        void setRadius(double newradius);
        /* Getter */
        double getRadius();
        /* Methods */
        double perimeter();
        double area();
};

/* The rectangle class */
class Rectangle : public RegularPolygon {
    private:
        double width;
        double height;
    public:
        Rectangle();
        Rectangle(const string&, double, double, double, double);
        Rectangle(const Rectangle&);
        
        /* Setters */
        void setWidth(double newwidth);
        void setHeight(double newheight);
        /* Getters */
        double getWidth();
        double getHeight();
        /* Methods */
        double perimeter();
        double area();
};

/* The square class */
class Square : public Rectangle {
    private:
        double equalside;
    public:
        Square();
        Square(const string&, double, double, double);
        Square(const Square&);

        /* Setter */
        void setEqualSide(double new_equalside);
        /* Getter */
        double getEqualSide();
        /* Methods */
        double perimeter();
        double area();
};

#endif