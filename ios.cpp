#include <iostream>
#include <vector>
#include <string>

int main()
{
    // does cin pass the conditional?
    int x;
    if (std::cin >> x)
    {
        std::cout << "you made it to integer!! \n";
    }
    else
    {
        std::cout << "integer ignored";
    };
    // if you don't put cin.clear() then mistaken input above will fail
    // and stop but if you put clear it won't and go find a matching type
    std::cin.clear();
    std::cin.ignore(100, '\n');
    std::string y;

    if (std::cin >> y)
    {
        std::cout << "you made it to string!!";
    }

    return 0;
}