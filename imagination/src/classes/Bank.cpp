#include <iostream>
#include "../../headers/Money.h"
#include "../../headers/Bank.h"

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