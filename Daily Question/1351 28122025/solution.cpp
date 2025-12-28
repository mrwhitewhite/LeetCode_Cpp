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
        int i;
        const int n = grid[0].size();

        for (const vector<int> &v : grid)
        {
            i = n - 1;
            while (i >= 0 && v[i--] < 0)
                res++;
        }
        return res;
    }
};