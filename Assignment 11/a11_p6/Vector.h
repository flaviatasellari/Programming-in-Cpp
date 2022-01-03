/*
   CH-230-A
   a11_p6.cpp 
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    private:
      int vector_size;
      double *elements;
    public:
      /* Constructers */
      Vector();
      Vector(double*);
      Vector(const Vector&);
      ~Vector();

      /* Setters */
      void setElements(double*);
      void setVectorSize(int);
      /* Getter */
      void getElements(double*);

      /* Methods */
      void print();
      double norm();
      Vector add(const Vector&);
      Vector subtract(const Vector&);
      double scalar_product(const Vector&);
};

#endif // VECTOR_H