/* Given an integer array nums, find the contiguous subarray */
/* which has the largest sum and return its sum */

/* A subarray is a contiguous part of an array. */

/* ### QUESTIONS ### */
/* What does a contiguous part mean? */
/* Subset of an array that are in the same order as its
superset */

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max = nums[0];
        for (int i = 1; i < nums.size(); ++i)
        {
                }

        return max;
    }
};

int main()
{
    Solution sln1;
    Solution sln2;

    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {4, 2, 3, 4};

    cout << sln1.maxSubArray(nums1) << endl;
    cout << sln2.maxSubArray(nums2) << endl;
}