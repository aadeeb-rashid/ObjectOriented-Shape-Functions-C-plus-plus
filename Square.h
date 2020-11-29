#pragma once
#include "TwoDimensionalShape.h"
class Square : public TwoDimensionalShape
{
    public:

    Square(float height)
    {
        length = height;  //only need to define one dimnension since they are both equal in a square. 
    }

    std::string getShapeType()
    {
        return "Square";
    }

    float getArea()
    {
        return length * length;
    }

};