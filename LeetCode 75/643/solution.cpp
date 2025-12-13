#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int i = 0;
        int j = k - 1 + i;
        int sum = accumulate(nums.begin() + i, nums.begin() + j + 1, 0);
        int max_sum = sum;
        j = k - 1 + (++i);

        while (j < nums.size())
        {
            sum = sum - nums[i - 1] + nums[j];
            max_sum = max(max_sum, sum);
            j = k - 1 + (++i);
        }

        return static_cast<double>(max_sum)/k;
    }
};