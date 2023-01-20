#include <iostream>

using namespace std;

int main()
{
    /*
     * Consider you want to allocate memory for an array of chars
     * String of 20 characters.
     * We can dynamically allocate memory on array as below
     */
    char *pvalue = NULL;
    pvalue = new char[20]; // Request memory for the variable

    delete[] pvalue; // delete array pointed to by pvalue

    /* You can allocate for multi-dimensional array as below */

    double **multidvalue = NULL;
    multidvalue = new double *[4]; // double [3][4] will error out

    // interesting behavior addressed here
    /* https://stackoverflow.com/questions/18273370/the-correct-way-to-initialize-a-dynamic-pointer-to-a-multidimensional-array */

    /* syntax to release memory for multi d array is same */
    delete[] multidvalue;
    return 0;
}