#pragma once
#include "TwoDimensionalShape.h"
class Triangle : public TwoDimensionalShape
{
    public:

    Triangle(float base, float height)
    {
        length = base;
        width = height;
    }

    std::string getShapeType()
    {
        return "Triangle";
    }

    float getArea()
    {
        return 0.5 * width * length;
    }

};