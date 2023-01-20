#include <iostream>

using std::cout;
using std::endl;
int main()
{
    
    char b = 'f';
    short a;
    int c;
    long d;
    long long e;
    long double ld;
    float fl;
    double db;
    cout << "size of char is " << sizeof(b) << " byte(s)" << endl;
    cout << "size of short is " << sizeof(a) << " byte(s)" << endl;
    cout << "size of int is " << sizeof(c) << " byte(s)" << endl;
    cout << "size of long is " << sizeof(d) << " byte(s)" << endl;
    cout << "size of long long is " << sizeof(e) << " byte(s)" << endl;
    cout << "size of long double is " << sizeof(ld) << " byte(s)" << endl;
    cout << "size of float is " << sizeof(fl) << " byte(s)" << endl;
    cout << "size of double is " << sizeof(db) << " byte(s)" << endl;
}