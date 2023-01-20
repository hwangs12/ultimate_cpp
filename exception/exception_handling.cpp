#include <iostream>

using namespace std;
/*
 * Exceptions provide a way to transfer control
 * from one part of a program to another
 * C++ exception handling is built upon three keywords
 * try, catch, and throw
 */

/*
 * throw - A program throws an exception when problem shows up
 * catch - A program catches an exception with an exception
 * handler at the place in a program where you want to handle
 * the problem.
 * try - identifies a block of code for which particular
 * exceptions will be activated.
 */

/* Throw Example */

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main()
{
    // try
    // {
    //     // protected code
    // }
    // catch (ExceptionName e1)
    // {
    //     // catch block
    // }
    // catch(ExceptionName e2)
    // {
    //     //catch block
    // }
    // catch (ExceptionName eN)
    // {
    //     // catch block
    // }

    /* Try and Catch Example Connected to Throw */
    int x = 50;
    int y = 0;
    double z = 0;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    /*****
    Because we are raising an exception of type const char*, so while catching this exception, we have to use const char* in catch block.
    *****/
    catch (const char *msg)
    {
        cerr << msg << endl;
    }

    return 0;
}