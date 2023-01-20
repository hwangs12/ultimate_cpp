#include <iostream>

/* POLYMORPHISM MEANS HAVING MANY FORMS */
/* IT OCCURS WHEN THERE IS A HIERARCHY OF CLASSES */
/* AND THEY ARE RELATED BY INHERITANCE */

#include <iostream>
using namespace std;

class Shape
{
protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    /* virtual is used to avoid early binding */
    virtual int area()
    {
        cout << "Parent class area :" << width * height << endl;
        return width * height;
    }

    // pure virtual function
    /* this tells compiler that the function has no body */
    virtual int area() = 0;
};
class Rectangle : public Shape
{
public:
    Rectangle(int a = 0, int b = 0) : Shape(a, b) {} // YES, YOU CAN DO THIS!!

    int area()
    {
        cout << "Rectangle class area :" << width * height << endl;
        return (width * height);
    }
};

class Triangle : public Shape
{
public:
    Triangle(int a = 0, int b = 0) : Shape(a, b) {}
    /*
     * if child class doesn't have same method
     * it would error out since parent doesn't recognize
     * what that function is. For example, below
     */
    int are()
    {
        cout << "Triangle class area :" << (width * height) / 2 << endl;
        return (width * height / 2);
    }
};

// Main function for the program
int main()
{
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    // store the address of Rectangle
    shape = &rec;

    // call rectangle area.
    shape->area();

    // store the address of Triangle
    shape = &tri;

    // call triangle area.
    shape->area();

    return 0;
}