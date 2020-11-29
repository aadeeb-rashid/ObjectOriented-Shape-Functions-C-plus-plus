#pragma once
#include "Shape.h"
class ThreeDimensionalShape : public Shape
{
    int getType()
    {
        return 1;
    }
    //Don't implement other methods because they are case specific. 
};