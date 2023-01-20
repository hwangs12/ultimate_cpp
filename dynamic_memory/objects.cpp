#include <iostream>

using namespace std;

class Box
{
public:
    Box()
    {
        cout << "Constructor called!" << endl;
    }
    ~Box()
    {
        cout << "Destructor called!" << endl;
    }
};
/* Guess how many times constructor and destructor is called! */
int main()
{
    Box *myBoxArray = new Box[4];
    delete[] myBoxArray; // Delete array

    return 0;
}