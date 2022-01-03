#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

/* A square is a rectangle with equal sides */
class Square : public Rectangle 
{
    public:
        Square(const char *n, double a);
        ~Square();
        
        double calcArea() const;
		double calcPerimeter() const;

    private:
        double side;
};

#endif // SQUARE_H