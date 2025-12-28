#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "tools.cpp"
using namespace std;

// class here
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int res = 0;

        for (const vector<int> &v : grid)
        {
            for (const int &i : v)
            {
                if (i < 0)
                    res++;
            }
        }
        return res;
    }
};