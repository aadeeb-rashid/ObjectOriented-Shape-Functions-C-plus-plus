#pragma once
#include "ThreeDimensionalShape.h"
class Sphere : public ThreeDimensionalShape
{
    public:

    Sphere(float radius)
    {
        length = radius; //only need to define one dimension since they are all equal. 
    }

    std::string getShapeType()
    {
        return "Sphere";
    }

    float getVolume()
    {
        return (4 * 3.14 * length * length * length) / 3;
    }

};