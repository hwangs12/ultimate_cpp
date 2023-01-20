/* THIS POINTER */
/* IMPLICIT PARAMETER TO ALL MEMBER FUNCTIONS */
/* FRIEND FUNCTIONS DO NOT HAVE THIS POINTER */
/* AS IT IS NOT MEMBER OF A CLASS */
/* ONLY MEMBER OF A CLASS HAVE THIS POINTER */

#include <iostream>

using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    // Constructor definition
    Box(double l = 2, double b = 2, double h = 2) : length(l), breadth(b), height(h)
    {
        cout << "Constructor called." << endl;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    /* HIGHLIGHT OF THE DOC */
    int compare(Box box)
    {
        return this->Volume() > box.Volume();
    }
};

int main()
{
    Box Box1(4.4, 2.3, 2.6);
    Box Box2(8, 6, 4);

    if (Box1.compare(Box2))
    {
        cout << "Box1 is smaller than Box1" << endl;
    }
    else
    {
        cout << "Box2 is equal to or larger than Box1" << endl;
    }

    return 0;
}
