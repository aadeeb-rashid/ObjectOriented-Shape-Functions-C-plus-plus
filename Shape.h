#pragma once
#include <iostream>
class Shape
{
    public: 
    
    //Any shape will have at least two dimensions. Thus, length and width. 

    float length;
    float width;

    Shape()                   //default constructor 
    {
        length = 0;
        width = 0;
    }
    
    //virtual methods to be overriden in the other classes.

    virtual float getArea()
    {}
    virtual float getVolume()
    {}
    
    virtual std::string getShapeType()
    {
        return "Shape";
    }
    virtual int getType()
    {}
};