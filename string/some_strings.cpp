#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string greeting = "hello";
    cout << greeting[0] << std::endl;
    // string can be appended using math operation
    greeting += "!";
    cout << greeting << std::endl;
    // c way of string is not dynamic
    char iamcstring[] = "hello";
    // iamcstring = "helli" is an error

    // cin grabs only first word if you have space or tab
    string tete;
    getline(cin, tete);
    cout << tete << endl;

    //work around this is to use getline

    string letsputthelineoutthere;
    getline(cin, letsputthelineoutthere);
    cout << letsputthelineoutthere << endl;

}