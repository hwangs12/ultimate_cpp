#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];

    // open a file in write mode.
    ofstream outfile;
    outfile.open("afile.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    /* Above examples make use of additional functions from cin object, like getline() function to read the line from outside and ignore() function to ignore the extra characters left by previous read statement. */
    cin.getline(data, 100);

    // write inputted data into the file.
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // again write inputted data into the file.
    outfile << data << endl;

    // close the opened file.
    outfile.close();

    // open a file in read mode.
    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file" << endl;
    infile >> data;

    // write the data at the screen.
    cout << data << endl;

    // again read the data from the file and display it.
    infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl;

    /* IMPORTANT BIT FROM STACKOVERFLOW */
    /* the normal input operator >> separates on whitespace and so can be used to read "words": */

    /* std::string word;
    while (file >> word)
    {
        ...
    } */

    // close the opened file.
    infile.close();

    return 0;
}