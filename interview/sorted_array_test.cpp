#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> monsterInc = {1, 2, 3};
    monsterInc[5] = 1;
    for (int i : monsterInc)
    {
        cout << i << endl;
    }
    return 0;
}