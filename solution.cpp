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
        int n = nums.size();
        int max_count = 0;
        int ptr1 = 0;
        int ptr2;

        // first window - ptr1
        while (ptr1 < n)
        {
            if (nums[ptr1] == 1)
            {
                break;
            }
            else if (nums[ptr1] == 0)
            {
                if (k > 0)
                {
                    k--;
                    break;
                }
                else if (k == 0)
                {
                    ptr1++;
                }
            }
        }
        if (ptr1 == n)
            return 0;

        // first window - ptr2
        ptr2 = ptr1;
        while (ptr2 < (n - 1))
        {
            ptr2++;
            if (nums[ptr2] == 1)
            {
            }
            else if (nums[ptr2] == 0)
            {
                if (k > 0)
                {
                    k--;
                }
                else if (k == 0)
                {
                    ptr2--;
                    break;
                }
            }
        }
        if (ptr1 == n)
            return 0;
        max_count = calc_count(ptr1, ptr2);

        // sliding
        while (ptr2 < (n - 1))
        {
            // remove ptr1
            int deleted_element = nums[ptr1++];
            if (deleted_element == 0)
                k++;

            // slide ptr2
            while (ptr2 < (n - 1))
            {
                ptr2++;
                if (nums[ptr2] == 0)
                {
                    if (k > 0)
                    {
                        k--;
                    }
                    else if (k == 0)
                    {
                        ptr2--;
                        break;
                    }
                }
            }
            max_count = max(max_count, calc_count(ptr1, ptr2));
        }

        return max_count;
    }
    int calc_count(int value1, int value2)
    {
        return value2 - value1 + 1;
    }
    void print_sliced_vector(vector<int> &nums, int start, int end)
    {
        for (int i = start; i <= end; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};