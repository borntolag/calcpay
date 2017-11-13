#include "Shape.h"

// define constructor implementation

Shape::Shape(string ashapeType, string ashapeUM)
{
    shapeID = nextID++;  // get next shapeID #
    shapeType = ashapeType;
    shapeUM = ashapeUM;
}
Shape::~Shape()
{}

// define implementations for getID, getType and UM member functions

int Shape::getID()
{
    return shapeID;
}

string Shape::getType()
{
    return shapeType;
}

string Shape::getUM()
{
    return shapeUM;
}
// implement nextID variable
int Shape::nextID = 0;
