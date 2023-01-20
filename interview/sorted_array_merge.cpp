#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

std::vector<int> mergeTwoArrays(std::vector<int> a, std::vector<int> b)
{
    int totalLength = a.size() + b.size() - 1;
    int aLength = a.size() - 1;
    int bLength = b.size() - 1;
    std::vector<int> zeros(abs(aLength - bLength) + 1);
    a.insert(a.end(), zeros.begin(), zeros.end());

    for (int nin : a)
    {
        std::cout << nin << std::endl;
    }

    while (aLength >= 0 && bLength >= 0)
    {
        if (a[aLength] > b[bLength])
        {
            a[totalLength] = a[aLength];
            aLength--;
        }
        else
        {
            a[totalLength] = b[bLength];
            bLength--;
        }
        totalLength--;
    };

    for (int i : a)
    {
        std::cout << "Hooray::: " << i << std::endl;
    };

    return a;
}

/*
    {1, 2, 3}
    {1, 1, 3, 5}

    {1, 1, 1, 2, 3, 3, 5}

 */

int main()
{
    mergeTwoArrays({1, 3, 5}, {1, 2});
    return 0;
}