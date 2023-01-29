#include <iostream>
#include "../../headers/Money.h"

class Bank : Money
{
private:
    double _reserve;

public:
    Bank(double reserve) : _reserve(reserve)
    {
        std::cout << "constructor called. Bank instantiated" << std::endl;
    };
};