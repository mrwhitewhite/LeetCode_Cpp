#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int right = 0, zeroCount = 0, max_len = 0;

        for (int i = 0; i < nums.size() && right >= i; i++)
        {
            if (nums[i] == 0)
                zeroCount++;

            // loop right ptr
            while (zeroCount <= 1 && right < (nums.size() - 1))
            {
                if (zeroCount < 1)
                {
                    if (nums[++right] == 0)
                        zeroCount++;
                }
                else if (zeroCount == 1)
                {
                    if (nums[++right] == 0)
                    {
                        right--;
                        break;
                    }
                }
            }
            max_len = max(right - i, max_len);

            // post-record action
            if (nums[i] == 0)
                zeroCount--;
        }

        return max_len;
    }
};