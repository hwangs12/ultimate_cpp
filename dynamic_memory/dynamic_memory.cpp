/*
 * good understanding of how dynamic memory really works in C++
 * is essential to becoming a good C++ programmer
 * Memory in C++ program is divided into two parts
 * Stack - all variables declared inside the function will
 * take up memory from the stack.
 * Heap - This is unused memory of the program and can be used
 * to allocate the memory dynamically when program runs
 */

/*
 * you can allocate memory at run time within the heap for the
 * variable of a given type using a special operator in c++
 * which returns the address of the space allocated.
 * This operator is called new operator
 */

/*
 * If you don't need dynamically allocated memory you can use
 * DELETE operator
 */
#include <iostream>
using namespace std;
int main()
{

    double *tvalue = NULL; // Pointer initialized with null
    tvalue = new double;   // Request memory for the variable

    double *pvalue = NULL;
    /* Question: how to make sense of pvalue = new double */
    if (!(pvalue = new double))
    {
        cout << "Error: out of memory." << endl;
        exit(1);
    }
}
