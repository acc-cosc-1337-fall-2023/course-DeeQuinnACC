//circle.h
#include <iostream>
#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape
{
public:
    void draw(){std::cout<<"Draw circle.\n";}
};

#endif //CIRCLE_H