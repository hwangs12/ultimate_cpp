#include <iostream>
#include <string>
using namespace std;
/*
 * The definition of the fn must differ from each other by
 * type of argument
 * number of arguments
 * cannot overload with different return types
 */
class printData
{
public:
    void print(int i)
    {
        cout << "Printing int: " << i << endl;
    }
    void print(double f)
    {
        cout << "Printing float: " << f << endl;
    }
    void print(char *c)
    {
        cout << "Printing character: " << c << endl;
    }
};

int main(void)
{
    printData pd;

    // Call print to print integer
    pd.print(5);

    // Call print to print float
    pd.print(500.263);

    // Call print to print character
    pd.print("Hello C++");

    return 0;
}