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
        double sum = accumulate(nums.begin() + i, nums.begin() + j + 1, 0.0);
        double max_mean = sum / k;
        j = k - 1 + (++i);

        while (j < nums.size())
        {
            sum = sum - nums[i - 1] + nums[j];
            max_mean = max(max_mean, sum / k);
            j = k - 1 + (++i);
        }

        return max_mean;
    }
};