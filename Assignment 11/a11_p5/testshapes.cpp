/*
   CH-230-A
   a11_p5.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {
  /* Circle instance */
  Circle c("The circle", 1, 1, 7);
  c.printName();
  cout << "Its perimeter = " << c.perimeter() << endl 
       << "Its area = " << c.area() << endl << endl;

  /* Rectangle instance */
  Rectangle r("The rectangle", 1, 1, 4, 3);
  r.printName();
  cout << "Its perimeter = " << r.perimeter() << endl
       << "Its area = " << r.area() << endl << endl;
  
  /* Square instance */  
  Square s("The square", 1, 1, 5);
  s.printName();
  cout << "Its perimeter = "<< s.perimeter() << endl 
       << "Its area = " << s.area() << endl << endl;

  return 0;
}