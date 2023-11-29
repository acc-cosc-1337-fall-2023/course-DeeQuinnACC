//
#include <iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
    public:
        //Contructor
        Vector(int size);
        //Destructor
        ~Vector();
        //Copy constructor
        Vector(const Vector& v);
    private:
        int *elements;
        int size;
        int capacity;
};

#endif

//Free functions
void use_vector();
