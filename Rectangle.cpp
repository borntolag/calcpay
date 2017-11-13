#include "Shape.h"
#include "Rectangle.h"

#include <string>
#include <iostream>

using namespace std;

// Implementation of class constructor with call to parent constructor
Rectangle::Rectangle(string ashapeType, string ashapeUM, double awidth, double alength) :
    Shape (ashapeType, ashapeUM), width(awidth), length(alength)
{}
Rectangle::~Rectangle()
{}
// Implementation of calcArea method

double Rectangle::calcArea()
{
    return width * length;
}

void Rectangle::print()
{
    cout <<" Area of " << getType() << " #" << getID() << " Area = " <<
        calcArea() << getUM() << "\n";
}
