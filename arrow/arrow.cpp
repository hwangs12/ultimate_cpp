// arrow and dot operator are used to reference individual members
// of classes, structures, and unions.

//Q: What is structures and unions?
// the dot operator is applied to the actual object.

//the arrow operator is used with a pointer to an object.

// Consider the following

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

struct house 
{
    string address;
    int area;
};

int main()
{
    struct house decatur = {"333 Meister Road", 1234};
    struct house oakville = {"1432 Coast Ct", 1500};

    struct house *ptr1;
    struct house *ptr2;

    ptr1 = &decatur;
    ptr2 = &oakville;

    ptr1->address="333 La Vista Road";
    ptr1->area=1234;

    ptr2->address="1333 Gyrope Pl";
    ptr2->area=1533;

    cout << ptr1->address << endl;
    cout << ptr2->address << endl;

    return 0;
}