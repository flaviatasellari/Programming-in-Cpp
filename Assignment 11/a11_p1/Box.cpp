/*
   CH-230-A
   a11_p1.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

Box::Box() {}

Box::Box (double val1, double val2, double val3) {
    height = val1;
    width = val2;
    depth = val3;
}

Box::Box (const Box& b) {
    height = b.height;
    width = b.width;
    depth = b.depth;
}

Box::~Box() {}

/* Setters */
void Box::setHeight (double new_height) {
    height = new_height;
}

void Box::setWidth (double new_width) {
    width = new_width;
}

void Box::setDepth (double new_depth) {
    depth = new_depth;
}

/* Getters */
double Box::getHeight () {
    return height;
}

double Box::getWidth () {
    return width;
}

double Box::getDepth () {
    return depth;
}

/* Method to find the volume */
double Box::volume () {
    return height * width * depth;
}