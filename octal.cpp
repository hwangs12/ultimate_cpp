#include <iostream>

int main()
{
    std::cout << "How old are you my brother? ";
    int age;
    std::cin >> age;
    std::cout << age << "\n";

    // is input from cin a char str or integer?
    if (age < 18)
    {
        std::cout << "You are a minor. \n";
    }
    else if (age >= 18 && age < 65)
    {
        std::cout << "You are an adult. \n";
    }
    else
    {
        std::cout << "You are a senior. \n";
    };

    return 0;
}