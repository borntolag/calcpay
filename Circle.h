#include <string>

using std::string;


// class definition for Circle which has Shape class as parent
class Circle : public Shape
{

    // class data members  (private)
    double radius;


public:
    // Declare Class Constructor
    Circle (string shapeType, string shapeUM, double radius);
    virtual ~Circle();

    // Declare public member functions for class.
    virtual double calcArea();
    virtual void print();

};


