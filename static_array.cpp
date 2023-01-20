#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print_array(int array[])
{
    cout << sizeof(array) << endl;
}

int main()
{
    // some odd behavior
    int tiktok[10];
    cout << sizeof(tiktok) << endl;
    print_array(tiktok);
    return 0;
}