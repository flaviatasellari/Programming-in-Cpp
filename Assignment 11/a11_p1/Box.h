/*
   CH-230-A
   a11_p1.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>

class Box
{
    private:
        double height;
        double width;
        double depth;

    public:
        /* Constructers */
        Box (); // default
        Box (double val1, double val2, double val3);
        Box (const Box&);
        ~Box (); // destructor
        
        /* Setters */
        void setHeight (double new_height);
        void setWidth (double new_width);
        void setDepth (double new_depth);
        
        /* Getters */
        double getHeight();
        double getWidth();
        double getDepth();

        double volume();
};
