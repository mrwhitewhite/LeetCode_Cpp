#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

// class here
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int left_value = 1;
        int right_value;
        int len = nums.size();
        vector<int> out;

        for (int i = 0; i < len; i++)
        {
            if (i != 0)
                {left_value *= nums.at(i-1);}

            if (i+1 < len)
                right_value = accumulate(nums.begin() + i + 1, nums.end(), 1, product);
            else
                right_value = 1;
            out.push_back(left_value * right_value);
        };
        return out;
    };

    static int product(int a, int b)
    {
        return a * b;
    };
};