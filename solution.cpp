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
        double max_mean = accumulate(nums.begin() + i, nums.begin() + j + 1, 0.0) / (j - i + 1);
        j = k - 1 + (++i);

        while (j < nums.size())
        {
            max_mean = max(max_mean, accumulate(nums.begin() + i, nums.begin() + j + 1, 0.0) / (j - i + 1));
            j = k - 1 + (++i);
        }

        return max_mean;
    }
};