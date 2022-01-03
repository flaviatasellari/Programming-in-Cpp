/*
   CH-230-A
   a12_p1.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	protected: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double); // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape {
	protected: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape { 
	protected:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

/* Hexagon class */
class Hexagon: public RegularPolygon { 
	private:
		double side;
		std::string color;
	public:
		/* Constructors */
		Hexagon(const std::string&, double, double, int, double, const std::string&);
		Hexagon(const Hexagon&);
		~Hexagon();
	
	    /* Setters */ 
		void setSide(double);
		void setColor(const std::string&);
        /* Getters */
		double getSide(); 
		std::string getColor(); 
	
        /* Methods */
		double perimeter();
		double area();
};
	    
#endif