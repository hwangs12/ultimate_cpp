#include <iostream>

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
     * All C++ programs are composed of these elements
     * Program statements (code) - actions and functions
     * Program data - affected by the program functions
     */

    // Encapsulation is OOP concept
    // it binds together data and functions that
    // manipulate the data
    // concept of data hiding

    // encapsulation: bundling data and functions that use them
    // abstraction: exposing only the interfaces and hiding the implementation details from the user

    Adder a;

    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    cout << "Total " << a.getTotal() << endl;
    return 0;
}