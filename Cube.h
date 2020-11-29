#pragma once
#include "ThreeDimensionalShape.h"
class Cube : public ThreeDimensionalShape
{
    public:

    Cube(float height)
    {
        length = height; //only need to define one variable because they are all equal.
    }

    std::string getShapeType()
    {
        return "Cube";
    }

    float getVolume()
    {
        return length * length * length;
    }
};