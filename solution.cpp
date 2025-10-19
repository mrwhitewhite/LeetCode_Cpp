#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int max_count = 0;
        int ptr1 = 0;
        int ptr2;

        // first window - ptr1
        while (ptr1 < nums.size())
        {
            if (nums[ptr1] == 1)
                break;
            else if (nums[ptr1] == 0 && k > 0)
            {
                k--;
                break;
            }
            ptr1++;
        }
        if (ptr1 == nums.size())
            return 0;

        // first window - ptr2
        ptr2 = ptr1;
        while (ptr2 < (nums.size() - 1))
        {
            ptr2++;
            if (nums[ptr2] == 0)
            {
                if (k > 0)
                    k--;
                else
                {
                    ptr2--;
                    break;
                }
            }
        }
        if (ptr1 == nums.size())
            return 0;
        max_count = ptr2 - ptr1 + 1;

        // sliding
        while (ptr2 < (nums.size() - 1))
        {
            // remove ptr1
            if (nums[ptr1++] == 0)
                k++;

            // slide ptr2
            while (ptr2 < (nums.size() - 1))
            {
                ptr2++;
                if (nums[ptr2] == 0)
                {
                    if (k > 0)
                        k--;
                    else
                    {
                        ptr2--;
                        break;
                    }
                }
            }
            max_count = max(max_count, ptr2 - ptr1 + 1);
        }

        return max_count;
    }
};