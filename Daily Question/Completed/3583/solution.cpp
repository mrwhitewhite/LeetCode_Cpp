#include <iostream>
#include <vector>
#include <unordered_map>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int specialTriplets(vector<int> &nums)
    {
        int prev[100001]{};
        int next[100001]{};
        long long out = 0;
        int mod = 1e9 + 7;

        // creating next frequency table
        for (int i = 2; i < size(nums); i++)
            next[nums[i]] += 1;

        // create prev freq table
        prev[nums[0]] += 1;

        for (int j = 1; j < size(nums) - 1; j++)
        {
            int ref = nums[j] * 2;
            if (ref <= 100001)
            {
                out += (long long)prev[ref] * next[ref];
            }
            // add j to prev
            prev[nums[j]] += 1;

            // remove j+1 from next
            next[nums[j + 1]] -= 1;
        }

        return out % mod;
    }
};