#include <iostream>
#include <vector>
using namespace std;

// class here
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> out;
        int len = nums.size();
        int tmp_nums;
        int i1 = 0;

        for (i1; i1 < len; i1++)
        {
            tmp_nums = 1;
            for (int i2 = 0; i2 < len; i2++)
            {
                if (i2 == i1)
                    continue;
                else if (tmp_nums == 0)
                    break;
                else
                    tmp_nums *= nums.at(i2);
            }
            out.push_back(tmp_nums);
        }

        return out;
    }
};