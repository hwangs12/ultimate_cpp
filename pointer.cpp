#include <iostream>

int main()
{
    int a = 4;
    int *b = &a;

    std::cout << *&b << "\n" << *&a << std::endl;

    return 0;
}