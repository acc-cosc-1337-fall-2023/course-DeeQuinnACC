//line.h
#include "shape.h"
#include <iostream>

#ifndef LINE_H
#define LINE_H

class Line : public Shape
{
    void draw(){ std::cout<<"Draw Line.";}
};

#endif LINE_H