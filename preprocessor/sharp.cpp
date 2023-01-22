// sharp and ## preprocessor operators are avail
//  in c++ and ANSI/ISO C.
//  # operator causes a replacement-text token to be converted
// to a string surrounded by quotes

#include <iostream>
using namespace std;

#define MKSTR(x) #x
// ## concats two var name
#define concat(a, b) a##b

int main()
{
    cout << MKSTR(HELLO C++) << endl;
    int xy = 100;

    cout << concat(x, y) << endl;

    return 0;
}