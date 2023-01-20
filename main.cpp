#include <iostream>

int main()
{
    int input;

    std::cout << "Enter your favorite number b/w 1 and 100: ";

    std::cin >> input;


    while (input)
    {
        if (input <= 100 && input >= 1) 
        {
            std::cout << "within range! Thanks!" << std::endl;
            input = 0;
        }
        else 
        {
            std::cout << "Out of range! \n";
            std::cout << "Enter your favorite number b/w 1 and 100: ";

            std::cin >> input;
        };
    }

    return 0; 
}