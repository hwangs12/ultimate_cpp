#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream file("sample.txt");
    std::string line;
    while (getline(file, line))
    {
        std::cout << line << std::endl;
    }

    return 0;
}