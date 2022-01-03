/*
   CH-230-A
   a13_p2.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{
    private:
        int real;  
        int imaginary;  

    public:
        /* Default constructor */
        Complex();         
        /* Constructor setting the properties with specific values */        
        Complex(int, int);    
        /* Copy constructor */
        Complex(const Complex&);
        /* Empty destructor */
        ~Complex();

        /* Setter methods */
        void setReal(int);
        void setImaginary(int);
        
        /* Getter methods */
        int getReal();
        int getImaginary();

        friend std::ostream& operator<<(std::ostream& str_o, 
                                        const Complex& comp);
        friend std::istream& operator>>(std::istream& str_i, 
                                        Complex& comp);
        Complex operator=(Complex&);
        Complex operator+(Complex&);
        Complex operator-(Complex&);
        Complex operator*(Complex&);
};

#endif // COMPLEX_H