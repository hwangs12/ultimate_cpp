#include <iostream>
#include <array>
#include <string>

void print_array(std::array<int, 251> guesses, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << guesses[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
}