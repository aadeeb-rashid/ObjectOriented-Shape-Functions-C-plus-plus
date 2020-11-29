#include <iostream>
#include "Square.h"
#include "Sphere.h"
#include "Triangle.h"
#include "Cube.h"
using namespace std;
int main() 
{  
    Shape * s[10];  
    Square s1(2.1); 

    s[0]= &s1;  
    s[1]=new Square(3.0);  
    s[2]=new Sphere(2.0);  
    s[3] = new Triangle(3.25, 4.0);  
    s[4]=new Sphere(4.0);  
    s[5]=new Cube(6.0); 
 
 
 for(int i = 0 ; i < 6 ; i++)
 {  
     if(s[i]->getType() == 0)  
     cout<<"Type=" <<s[i]->getShapeType()<<"\t"<< s[i]->getArea()<<endl;  
     else  
     cout<<"Type=" <<s[i]->getShapeType()<<"\t"<< s[i]->getVolume()<<endl;  
     } 
 
 return 0; 
 } 