#include <string>

using std::string;


// class definition for Square which has Shape class as parent
class Square : public Shape
{
    // define class data members
    double side;

    public:

        // Declare class constructor/deconstructor
        Square(string shapeType, string shapeUM, double aside);
        virtual ~Square();

        // Define Class Member Functions
        virtual double calcArea();

        virtual void print();


};

