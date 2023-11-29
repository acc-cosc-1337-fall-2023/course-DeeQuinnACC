//
#include <iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
    public:
        //Contructor
        Vector(int size);
        //Copy constructor so that copying doesn't get two pointers pointing
        //at the same data
        Vector(const Vector& v);
        //Destructor so that we can destroy memory
        ~Vector();
        //Taking over the = operator to avoid memory leaks
        Vector& operator=(const Vector& v);
    private:
        int *elements;
        int size;
        int capacity;
};

#endif

//Free functions
void use_vector();
