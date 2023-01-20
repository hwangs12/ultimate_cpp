#include <iostream>

using namespace std;

class Adder
{
public:
    // constructor
    Adder(int i = 0)
    {
        total = i;
    }

    // interface to outside world
    void addNum(int number)
    {
        total += number;
    }

    // interface to outside world
    int getTotal()
    {
        return total;
    };

private:
    // hidden data from outside world
    int total;
};

int main()
{
    /*
     * Data abstraction means providing only essential
     * information to the outside world and hiding
     * their background details
     * to represent the needed information in program
     * without presenting the dtails.
     *
     * It is a programming technique that relies on the
     * separation of interface and implementation
     *
     *
     */
    Adder a;

    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    cout << "Total " << a.getTotal() << endl;
    return 0;
}

/*
Above class adds numbers together, and returns the sum. The public members - addNum and getTotal are the interfaces to the outside world and a user needs to know them to use the class. The private member total is something that the user doesn't need to know about, but is needed for the class to operate properly.
 */
