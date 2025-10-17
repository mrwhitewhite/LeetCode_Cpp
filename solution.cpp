#include <vector>
#include <iostream>
using namespace std;

// class here
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int ptr = 0;
        int current;

        for (int i = 0; i < nums.size(); i++)
        {
            current = nums.at(i);
            if (current == 0)
            {
                continue;
            }
            else
            {
                nums.at(ptr++) = current;
            }
        }

        for (; ptr < nums.size(); ptr++)
        {
            nums.at(ptr) = 0;
        }
    }
};