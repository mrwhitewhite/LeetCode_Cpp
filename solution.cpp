#include <iostream>
#include <vector>
#include <numeric>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        // left and right at pivot index=0
        int left = 0;
        int right = accumulate(nums.begin() + 1, nums.end(), 0);

        if (left == right)
            return 0;

        for (int i = 1; i < nums.size(); i++)
        {
            left += nums[i - 1];
            right -= nums[i];
            if (left == right)
                return i;
        }

        return -1;
    }
};