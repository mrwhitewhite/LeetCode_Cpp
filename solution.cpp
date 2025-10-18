#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int count = 0;
        int i = 0;
        int j = 1;

        while (i < nums.size())
        {
            if (nums[i] >= k)
            {
                j = ++i + 1;
                continue;
            }

            while (j < nums.size())
            {
                if (nums[i] + nums[j] == k)
                {
                    nums[i] = k;
                    nums[j] = k;
                    count++;
                    j = i;
                    i--;
                    break;
                }
                else
                    j++;
            }
            j = ++i + 1;
        }

        return count;
    }
};