#include "Shape.h"
#include "Square.h"
#include <string>
#include <iostream>

using namespace std;

// Implementation of class constructor
Square::Square(string ashapeType, string ashapeUM, double aside) :
    Shape(ashapeType, ashapeUM), side(aside)
{}
Square::~Square()
{}

// Implementation of calcArea method

double Square::calcArea()
{
    return side * side;
}

void Square::print()
{
        //Display the Square's area
    cout << "Area of " << getType() << " #" << getID() << " = " << calcArea() << getUM() << "\n";
}
