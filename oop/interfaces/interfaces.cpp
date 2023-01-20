#include <iostream>

class Box
{
public:
    /* A class is made abstract by declaring at least one of its functions as pure virtual function. */
    // pure virtual function
    virtual double getVolume() = 0;
    Box(double a = 1, double b = 2, double c = 3) : length(a), breadth(b), height(c)
    {
        std::cout << "constructor called" << std::endl;
    };

private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};

int main()
{
    /* following instantiation will error out due to Box
    being pure - meaning they have pure virtual function inside */
    Box kellog;
}