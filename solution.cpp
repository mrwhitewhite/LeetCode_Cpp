#include <vector>
#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

// class here
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int n = nums.size();
        int small = *max_element(nums.begin(), nums.end());
        int large = *max_element(nums.begin(), nums.end());

        for (int i : nums)
        {
            if (i <= small)
            {
                small = i;
            }
            else if (i <= large)
            {
                large = i;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};