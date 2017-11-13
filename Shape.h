#include <string>

using std::string;

class Shape
{

    // define member data items
    int shapeID;
    string shapeType;
    string shapeUM;

    // nextID is a static integer that stores last shapeID # assigned
    static int nextID;

    // Declare public member functions for base class
    public:
        Shape( string shapeType, string shapeUM);  //Constructor
        virtual ~Shape(); //Deconstructor

        int getID();
        string getType();
        string getUM();

        // declare virtual member functions for calculating area which also
        // declares the shape class to be abstract

        virtual double calcArea() = 0;
        virtual void print() = 0;

};


