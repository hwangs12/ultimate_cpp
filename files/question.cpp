#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // what is stream.out in fstream variable?

    std::fstream stream("kindness.txt", stream.out);

    std::cout << stream.out << std::endl;

    return 0;
}