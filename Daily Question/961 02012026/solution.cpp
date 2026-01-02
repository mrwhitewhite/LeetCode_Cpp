#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "tools.cpp"
using namespace std;

class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        int h[10001]{};

        for (int &i : nums)
        {
            if (++h[i] > 1)
                return i;
        }

        return -1;
    }
};