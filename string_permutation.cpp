// string permutation
// when two strings can be rearranged to match each other,
// ex) 'apple' 'leppa' are permutations of each other.
// ex) 'apple' 'banana' are not.

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool permutations(string str1, string str2)
{
    if (str1.size() != str2.size())
    {
        return false;
    }
    int i;
    int counter[256] = {0};
    for (i = 0; str1[i]; ++i)
    {
        counter[int(str1[i])]++;
        counter[int(str2[i])]--;
    }

    for (int j : counter)
    {
        if (j != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << "#####testtesttest######" << endl;
    cout << "apple vs leppa ::: "
         << "expected value is true and got " << permutations("apple", "leppa") << endl;
    cout << "'' vs '' ::: "
         << "expected value is true and got " << permutations("", "") << endl;
    cout << "'a' vs '' ::: "
         << "expected value is false and got " << permutations("a", "") << endl;
    cout << "apple vs leppah ::: "
         << "expected value is false and got " << permutations("apple", "leppah") << endl;
    cout << "banana vs havanah ::: "
         << "expected value is false and got " << permutations("banana", "havanah") << endl;
    cout << "dates vs stade ::: "
         << "expected value is true and got " << permutations("dates", "stade") << endl;
    cout << "#####testtesttest######" << endl;
}