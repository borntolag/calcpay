#include "Shape.h"
#include "Circle.h"
#include <string>
#include <iostream>

using namespace std;

// define implementation of class constructor

Circle::Circle(string ashapeType, string ashapeUM, double aradius) :
    Shape(ashapeType, ashapeUM), radius(aradius)
{}
Circle::~Circle()
{}


// define implementation for calcArea method
double Circle::calcArea()
{
    return 3.14159 * radius * radius;
}
void Circle::print()
{
        // Display the area of the circle object
    cout << "Area of Circle #" << getID()<<" = " << calcArea() << getUM() << "\n";

}
