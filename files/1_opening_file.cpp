#include <iostream>
#include <fstream>
/*
 * A file must be opened before you can read from it or write
 * ofstream or fstream object may be used to open file to write
 * ifstream open a file to read purpose
 *
 *
 *
 */

int main()
{
    /*
     * You can combine two or more of the mode flags by ORing
     * If you want to open a file in write mode and want to
     * truncate it in case that already exists
     */

    /* ios::out opens a file in write mode */
    /* ios::trunc - if the file already exists */
    /* contents will be truncated before opening the file */

    std::ofstream outfile;
    outfile.open("file.dat", std::ios::out | std::ios::trunc);

    /* You can open a file for reading and writing purpose */

    std::fstream afile;
    afile.open("file.dat", std::ios::out | std::ios::in);

    /* writing to a file - insertion operator */
    char one_character;
    std::cin >> one_character;
    outfile << one_character << std::endl;

    /* reading from a file - extraction operator */

    /* it's always good practice to close a file */
    outfile.close();
    afile.close();
}