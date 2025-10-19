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

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                zeroCount++;

            // right following i
            if (i > right)
                right = i;

            // loop right ptr until no zero count
            while (right < (nums.size() - 1) && (zeroCount < 1 || nums[right + 1] == 1))
            {
                if (nums[++right] == 0)
                    zeroCount++;
                if (zeroCount == 2)
                {
                    right--;
                    zeroCount--;
                    break;
                }
            }

            // cout << "i: " << i << " right: " << right << " zeroCount: " << zeroCount << " n_element: " << right - i + 1 << endl;
            // print_vector_slice(nums, i, right);

            max_len = max(right - i, max_len);
            // post-record action
            if (nums[i] == 0)
                zeroCount--;
        }

        return max_len;
    }
};