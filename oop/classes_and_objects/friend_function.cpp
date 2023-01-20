/* FRIEND FUNCTION IS DEFINED OUTSIDE CLASS SCOPE */
/* BUT HAS ACCESS TO PRIVATE AND PROTECTED MEMBERS */
/* PROTOTYPE FOR FRIEND FUNCTION APPEAR IN CLASS DEF'N */
/* FRIENDS ARE NOT MEMBER FUNCTIONS */

/* FRIEND CAN BE FUNCTION, FN TEMPLATE, MEMBER FN, CLASS */
/* OR CLASS TEMPLATE */

/* EXAMPLE OF FRIEND FUNCTION DECLARATION */

#include <iostream>

using namespace std;

class Box
{
    double width;

public:
    friend void printWidth(Box box);
    void setWidth(double wid);
};

// Member function definition
void Box::setWidth(double wid)
{
    width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth(Box box)
{
    /* Because printWidth() is a friend of Box, it can
    directly access any member of this class */
    cout << "Width of box : " << box.width << endl;
}

// Main function for the program
int main()
{
    Box box;

    // set box width without member function
    box.setWidth(10.0);

    // Use friend function to print the wdith.
    printWidth(box);

    return 0;
}