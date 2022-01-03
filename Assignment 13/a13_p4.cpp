/*
   CH-230-A
   a13_p4.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B()  { setX(10); }
};
 
class C: virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/* The error shown in the compiler is "D::print" is ambiguous.
This happens because class D is not a direct sub-class of class A
but it inherits from class B and D, therefore the print method 
found in class A cannot be used directly.
We can fix this error by putting the word "virtual" before 
"public A" in class B and class C. Now the program should compile 
and it prints on the screen the number 20. */