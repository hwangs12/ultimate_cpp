#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
    /* what is a public method provided by exception class */
    const char *what() const throw()
    {
        return "C++ Exception";
    }
};

/* Whatever is 'thrown' goes to catch block to be processed */

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException &e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        // Other errors
    }
}