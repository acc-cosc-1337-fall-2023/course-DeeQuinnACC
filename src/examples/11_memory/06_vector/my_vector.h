//
#include <iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
    public:
        Vector(int size);
        ~Vector();
    private:
        int *elements;
        int size;
        int capacity;
};

#endif

//Free functions
void use_vector();
