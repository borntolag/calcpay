#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include <string>

using namespace std;

double side, radius, length, width;

string circleUM, rectangleUM, squareUM;


int main()
{

    // Prompt for the radius of a circle

    cout << "Enter the Radius of your circle \n";
    cin >> radius;

    cout << "Enter Unit of Measure for your circle \n";
    cin >> circleUM;

    // Create Circle object with specified radius
    Circle circlea("Circle",circleUM,radius);
    Circle* memoryCircle = &circlea;

    // Display the area of the circle object

    memoryCircle->print();  //access function through address
    delete &memoryCircle;   //remove object from memory.

    // Prompt for the length of a side for a square
    cout <<"Enter the length of a side for your Square \n";
    cin >>side;

    cout <<"Enter the Unit of Measure for a side of your square \n";
    cin >>squareUM;

    //Create Square object with specified side length
    Square squarea("Square",squareUM, side);
    Square* memorySquare = &squarea;

    //Display the Square's information

    memorySquare->print();

    delete &memorySquare;

    cout << "Enter the length of your rectangle \n";
    cin >> length;

    cout << "Enter the width of your rectangle \n";
    cin >> width;

    cout << "Enter Unit of Measure for your rectangle \n";
    cin >> rectangleUM;

    Rectangle rectanglea ("Rectangle", rectangleUM, length, width);
    Rectangle* memoryRectangle = &rectanglea;

    memoryRectangle->print();
    delete &memoryRectangle;

    return 0;
}
