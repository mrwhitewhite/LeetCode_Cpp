#include <vector>
#include <iostream>
using namespace std;

// class here
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int count = 0;
        int i = 0;
        while (i < nums.size())
        {
            if (nums.at(i) == 0)
            {
                count++;
                nums.erase(nums.begin() + i);
                continue;
            }
            else
                i++;
        }
        nums.insert(nums.end(), count, 0);
    }
};