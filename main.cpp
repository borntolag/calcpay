#include <iostream>
#include "Circle.h"
#include "Square.h"

using namespace std;

double side, radius;

int main()
{

    // Prompt for the radius of a circle

    cout << "Enter the Radius of your circle \n";
    cin >> radius;

    // Create Circle object with specified radius
    Circle circlea(radius);

    // Display the area of the circle object
    cout << "Area of Circle = " << circlea.calcArea() << "\n";

    // Prompt for the length of a side for a square
    cout <<"Enter the length of a side for your Square \n";
    cin >>side;

    //Create Square object with specified side length
    Square squarea(side);

    //Display the Square's area
    cout << "Area of Square = " << squarea.calcArea() << "\n";

    return 0;
}
