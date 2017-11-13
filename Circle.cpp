#include "Circle.h"
// define implementation of class constructor

Circle::Circle(double aradius)
{
    radius = aradius;
}

// define implementation for calcArea method
double Circle::calcArea()
{
    return 3.14159 * radius * radius;
}
