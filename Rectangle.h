#include <string>


using std::string;

// class definition for Rectangle which has Shape class as parent

class Rectangle : public Shape
{
    // define class data members
    double width, length;


public:
    // Declare class constructor
    Rectangle(string shapeType, string shapeUM, double width, double length);
    virtual ~Rectangle();

    // Declare class member functions
    virtual double calcArea ();
    virtual void print();
};


