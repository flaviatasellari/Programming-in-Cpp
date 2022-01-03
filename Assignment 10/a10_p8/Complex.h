/*
   CH-230-A
   a10_p8.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

using namespace std;

class Complex
{
    private:
        float real;  
        float imaginary; 

    public:
        /* Default constructor */
        Complex();                
        /* Constructor setting the properties with specific values */
        Complex(float, float); 
        /* Copy constructor */
        Complex(const Complex&);
        /* Empty destructor */
        ~Complex();
        
        /* Setter methods */
        void setReal(float);
        void setImaginary(float);
        
        /* Getter methods */
        float getReal();
        float getImaginary();

        Complex conjugate();
        Complex add(Complex);
        Complex subtract(Complex);
        Complex multiply(Complex);
        
        /* Method for printing */
        void print(); 

};           
