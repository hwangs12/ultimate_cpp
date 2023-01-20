#include <iostream>

using namespace std;

class Box
{
public:
    static int objectCount;
    static int countFromFunction;

    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;

        // Increase every time object is created
        objectCount++;
        countFromFunction++;
    }
    double Volume()
    {
        return length * breadth * height;
    }

    /* NOTE: STATIC FUNCTION CANNOT REFER TO 'THIS' KEYWORD */
    static int getCount()
    {
        return countFromFunction;
    }

private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};

// Initialize static member of class Box
int Box::countFromFunction = 0;
int Box::objectCount = 0;

int main(void)
{
    Box Box1(3.3, 1.2, 1.5); // Declare box1
    Box Box2(8.5, 6.0, 2.0); // Declare box2

    // Print total number of objects.
    /* NOTICE HOW IT USES :: TO ACCESS STATIC MEMBER */
    cout << "Total objects: " << Box::getCount() << endl;

    return 0;
}