#include "Rectangle.h"

// Implementation of class constructor
Rectangle::Rectangle(int awidth, int alength)
{
    width = awidth;
    length = alength;

}

// Implementation of calcArea method

int Rectangle::calcArea()
{
    return width * length;
}



