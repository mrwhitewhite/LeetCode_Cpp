#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// class here
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());

        for (int i : nums)
        {
            if (i > min and i < max)
                return true;
        }

        return false;
    }
};