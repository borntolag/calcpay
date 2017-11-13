#include "Square.h"

// Implementation of class constructor
Square::Square(double aside)
{
    side = aside;
}

// Implementation of calcArea method

double Square::calcArea()
{
    return side * side;
}
