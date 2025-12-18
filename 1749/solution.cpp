#include <iostream>
#include <vector>
#include "tools.cpp"
using namespace std;

class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int max_pos = 0;
        int max_neg = 0;
        int res = 0;

        int max_pos_tracker = 0;
        int max_neg_tracker = 0;
        for (int i : nums)
        {
            max_pos_tracker += i;
            max_neg_tracker += i;
            if (i > max_pos_tracker)
                max_pos_tracker = i;
            if (i < max_neg_tracker)
                max_neg_tracker = i;

            max_pos = max(max_pos, max_pos_tracker);
            max_neg = min(max_neg, max_neg_tracker);
            res = max(res, max(max_pos, abs(max_neg)));
        }

        return res;
    }
};