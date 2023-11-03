//shape.h
#include <iostream>

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    virtual void draw()=0; //Pure virual function
    //This makes this an abstract class

};

#endif SHAPE_H