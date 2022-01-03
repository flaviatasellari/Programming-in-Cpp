/*
   CH-230-A
   a13_p5.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
public:
// Add the constructor of the form D():A(number)
  D():A(10) {  }
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/* When I try to compile it, I get these errors:
- In function 'int main()': use of deleted function 'D::D()'
- no matching function for call to 'A::A()'

Letting the problem as it is, we can see that
class A cannot have a connection with class D.

The error is caused by the implicit default constructor for D 
calling a default constructor of A which does not exist.

In order to fix the errors, the constructor of A should be called 
in class D, as it is used in class B and class C. 
Now the program should compile. */